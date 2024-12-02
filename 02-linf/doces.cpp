/*
B. Caixa de Doces
time limit per test - 1 s.
memory limit per test - 256 MB
Existem n caixas com quantidades diferentes de doces em cada uma delas. A
i-ésima caixa contém ai doces.

Você também tem n amigos para os quais deseja dar os doces, então você decidiu
dar uma caixa de doces para cada amigo. No entanto, você não quer que nenhum
amigo fique insatisfeito, então decidiu comer alguns (possivelmente nenhum)
doces de cada caixa para que todas as caixas fiquem com a mesma quantidade de
doces. Note que você pode comer um número diferente de doces de cada caixa, mas
não pode adicionar doces às caixas.

Qual é o número mínimo total de doces que você precisa comer para satisfazer os
requisitos?

Input
A primeira linha contém um inteiro t (1≤t≤1000) — o número de casos de teste.

A primeira linha de cada caso de teste contém um inteiro n (1≤n≤50) — o número
de caixas que você tem.

A segunda linha de cada caso de teste contém n inteiros a1,a2,…,an (1≤ai≤107) —
a quantidade de doces em cada caixa.

Output
Para cada caso de teste, imprima um único inteiro indicando o número mínimo de
doces que você precisa comer para satisfazer os requisitos.
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
  ull boxes;
  ull res;
  ull smallestAmmount;
  vector<ull> ammounts;

  cin >> testCases;

  for (unsigned i = 0; i < testCases; i++) {
    cin >> boxes;
    smallestAmmount = 1ULL << 63;
    res = 0;
    ammounts.clear();
    for (unsigned j = 0; j < boxes; j++) {
      ull ammount;
      cin >> ammount;
      ammounts.push_back(ammount);
      if (ammount < smallestAmmount) {
        smallestAmmount = ammount;
      }
    }
    for (auto ammount : ammounts) {
      res += ammount - smallestAmmount;
    }
    cout << res << endl;
  }

  return 0;
}
