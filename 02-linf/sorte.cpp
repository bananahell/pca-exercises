/*
A. Sorte Lascada
time limit per test - 1 s.
memory limit per t  - est256 MB
Um bilhete é uma string composta por seis dígitos. Um bilhete é considerado
sortudo se a soma dos três primeiros dígitos for igual à soma dos três últimos
dígitos. Dado um bilhete, determine se ele é sortudo ou não. Note que um bilhete
pode conter zeros à esquerda.

Input
A primeira linha da entrada contém um inteiro t (1≤t≤103) — o número de casos de
teste.

A descrição de cada caso de teste consiste em uma linha contendo uma string
composta por seis dígitos.

Output
Imprima t linhas, cada uma contendo a resposta para o caso de teste
correspondente. Imprima SIM" se o bilhete dado for sortudo, e NÃO" caso
contrário.

Você pode imprimir a resposta em qualquer combinação de maiúsculas e minúsculas
(por exemplo, as strings sIm", sim", Sim" e SIM" serão reconhecidas como
respostas positivas).
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

  ull ticketAmmount;
  string inputNum;

  cin >> ticketAmmount;

  for (unsigned i = 0; i < ticketAmmount; i++) {
    cin >> inputNum;
    if ((inputNum.at(0) - '0') + (inputNum.at(1) - '0') +
            (inputNum.at(2) - '0') ==
        (inputNum.at(3) - '0') + (inputNum.at(4) - '0') +
            (inputNum.at(5) - '0')) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
