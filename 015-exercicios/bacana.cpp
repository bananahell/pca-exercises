/*
C. Coloração Bacana
time limit per test - 1 s.
memory limit per test - 256 MB
Cacildo e Jucimara têm uma string favorita s que consiste em letras minúsculas
do alfabeto latino. Eles querem pintá-la usando pedaços de giz de duas cores:
vermelho e verde. Vamos chamar de coloração "bacana" uma coloração da string que
satisfaz as seguintes condições:

cada letra da string é pintada em exatamente uma cor (vermelho ou verde) ou não
é pintada; quaisquer duas letras que sejam pintadas com a mesma cor são
diferentes; o número de letras pintadas de vermelho é igual ao número de letras
pintadas de verde; o número de letras pintadas nesta coloração é máximo entre
todas as colorações da string que satisfazem as três primeiras condições.

Por exemplo, considere a string s igual a "kzaaa". Uma das colorações bacanas da
string é mostrada na figura.

Cacildo e Jucimara querem aprender sozinhos como encontrar uma coloração bacana
da string. Mas eles são muito jovens, então precisam de uma dica. Ajude-os a
encontrar k — o número de letras pintadas de vermelho (ou verde, já que esses
números são iguais) em uma coloração bacana.

Input
A primeira linha contém um inteiro t (1≤t≤1000) — o número de casos de teste.
Depois os t casos de teste são apresentados.

Cada caso de teste consiste em uma string s não vazia composta por letras
minúsculas do alfabeto latino. O número de caracteres na string não excede 50.

Output
Para cada caso de teste, imprima uma linha separada contendo um inteiro não
negativo k — o número de letras que serão pintadas de vermelho em uma coloração
"bacana".
*/

#include <bits/stdc++.h>

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0);

#define ull unsigned long long

using namespace std;

int main() {
  fast_io;

  ull testCases;
  string input;
  vector<char> vec1;
  vector<char> vec2;
  cin >> testCases;

  for (unsigned i = 0; i < testCases; i++) {
    cin >> input;
    vec1.clear();
    vec2.clear();
    sort(input.begin(), input.end());
    for (unsigned i = 0; i < input.size(); i++) {
      if (vec1.size() <= vec2.size()) {
        if (vec1.size() == 0) {
          vec1.push_back(input.at(i));
        } else if (vec1.at(vec1.size() - 1) == input.at(i)) {
          if (vec2.size() == 0) {
            vec2.push_back(input.at(i));
          } else if (vec2.at(vec2.size() - 1) != input.at(i)) {
            vec2.push_back(input.at(i));
          }
        } else {
          vec1.push_back(input.at(i));
        }
      } else {
        if (vec2.size() == 0) {
          vec2.push_back(input.at(i));
        } else if (vec2.at(vec2.size() - 1) == input.at(i)) {
          if (vec1.size() == 0) {
            vec1.push_back(input.at(i));
          } else if (vec1.at(vec1.size() - 1) != input.at(i)) {
            vec1.push_back(input.at(i));
          }
        } else {
          vec2.push_back(input.at(i));
        }
      }
    }
    cout << (vec1.size() < vec2.size() ? vec1.size() : vec2.size()) << endl;
  }

  return 0;
}
