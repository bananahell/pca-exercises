/*
B. Vejam Essas Strings!
time limit per test - 2 s.
memory limit per test - 512 MB
Uma string s de comprimento n (1≤n≤26) é chamada de alfabética se ela puder ser
obtida usando o seguinte algoritmo:

primeiro, escreva uma string vazia em s (ou seja, execute a atribuição s := "");
então, realize o próximo passo n vezes;
no i-ésimo passo, pegue a i-ésima letra minúscula do alfabeto latino e escreva-a
à esquerda da string s ou à direita da string s (ou seja, execute a atribuição s
:= c+s ou s := s+c, onde c é a i-ésima letra do alfabeto latino).

Em outras palavras, percorra as n primeiras letras do alfabeto latino começando
por 'a' e assim por diante. A cada vez, preencha uma letra à esquerda ou à
direita da string s. Strings que podem ser obtidas dessa forma são chamadas de
alfabéticas.

Por exemplo, as seguintes strings são alfabéticas: "a", "ba", "ab", "bac" e
"ihfcbadeg". As seguintes strings não são alfabéticas: "z", "aa", "ca", "acb",
"xyz" e "ddcba".

Dada uma string, determine se ela é alfabética.

Input
A primeira linha contém um inteiro t (1≤t≤104) — o número de casos de teste.
Depois, seguem-se t casos de teste.

Cada caso de teste é escrito em uma linha separada e contém uma string s. A
string s consiste de letras minúsculas do alfabeto latino e tem um comprimento
entre 1 e 26, inclusive.

Output
Imprima t linhas, cada uma contendo a resposta para o respectivo caso de teste.
Imprima YES se a string dada s for alfabética e NO caso contrário.

Você pode imprimir YES e NO em qualquer formato (por exemplo, as strings yEs,
yes, Yes e YES serão reconhecidas como uma resposta positiva).
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
  ull begin;
  ull end;
  size_t found;
  char currChar;
  cin >> testCases;
  bool isNo;

  for (unsigned i = 0; i < testCases; i++) {
    cin >> input;
    isNo = false;
    found = input.find('a');
    if (found == string::npos) {
      cout << "NO" << endl;
      continue;
    }
    currChar = 'b';
    begin = found;
    end = found;
    while (end - begin + 1 != input.size()) {
      if (begin != 0 && input.at(begin - 1) == currChar) {
        begin--;
      } else if (end + 1 != input.size() && input.at(end + 1) == currChar) {
        end++;
      } else {
        cout << "NO" << endl;
        isNo = true;
        break;
      }
      currChar++;
    }
    if (isNo == false) {
      cout << "YES" << endl;
    }
  }

  return 0;
}
