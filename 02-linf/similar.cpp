/*
E. Strings Similares
time limit per test - 2 s.
memory limit per test - 256 MB
Uma string binária é uma string em que cada caractere é, ou zero (0), ou um (1).
Duas strings binárias a e b, de comprimentos iguais, são similares se elas
possuem o mesmo caractere em alguma posição específica, isto é, se existe um
inteiro i de modo que ai=bi. Por exemplo:

10010 e 01111 são similares (elas possuem o mesmo caractere na posição 4);
10010 e 11111 são similares;
111 e 111 são similares;
0110 e 1001 não são similares.
Você recebe um número inteiro n e uma string binária s consistindo de 2n−1
caracteres. Podemos denotar s[l..r] como uma subtring contígua de s começando no
l-ésimo caractere e terminando no r-ésimo caractere (em outras palavras,
s[l..r]=slsl+1sl+2…sr).

Sua tarefa consiste em construir uma string binária w de comprimento n que seja
similar para todas as seguintes strings: s[1..n], s[2..n+1], s[3..n+2], ...,
s[n..2n−1].

Input
A primeira linha contém um número inteiro t (1≤t≤1000) — a quantidade de casos
de teste.

A primeira linha de cada caso de teste contém um número inteiro n (1≤n≤50).

A segunda linha de cada caso de teste contém uma string binária s de comprimento
2n−1. Cada caractere si é ou 0, ou 1.

Output
Para cada caso de teste, imprima a string binária correspondente w de
comprimento n. Se existirem várias dessas strings que resolvem o problema —
imprima qualquer uma delas na saída. Pode-se verificar que existe pelo menos uma
string w em concordância com as restrições do problema.
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
  ull sizeN;
  string inputBinary;

  cin >> testCases;

  for (unsigned i = 0; i < testCases; i++) {
    cin >> sizeN;
    cin >> inputBinary;
    if (sizeN == 1) {
      string ansString(sizeN, inputBinary.at(0));
      cout << ansString << endl;
    } else {
      string ansString(sizeN, inputBinary.at(sizeN - 1));
      cout << ansString << endl;
    }
  }

  return 0;
}
