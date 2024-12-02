/*
C. Promoção ou Enganação?
time limit per test - 1 second
memory limit per test - 256 megabytes
Nas feiras populares é comum o fato do comerciante anunciar seus produtos em
dois preços distintos: o regular (por exemplo, "um por quatro reais") e o
promocional ("três por dez reais").

Os supermercados também estão aderindo a este comportamento, mas com um
agravante: nem sempre o preço promocional é mais baixo que o regular! Por
exemplo, comprar 2 unidades de um produto por 3 reais é mais barato que a
promoção 3 por 5 reais (afinal, para comprar 6 unidades pelo preço regular o
consumidor gastaria 9 reais, já na promoção o gasto seria de 10 reais...).

Dado o número de unidades N vendidas pelo preço regular R e o número de unidades
M vendidas pelo preço promocional P, determine se temos uma promoção ou uma
enganação: se o preço promocional for mais caro ou for idêntico ao preço
regular, temos uma enganação!

Input
A primeira linha da entrada contém os inteiros N e R (1≤N,R≤104), separados por
um espaço em branco.

A segunda linha da entrada contém os inteiros M e P (1≤M,P≤104), separados por
um espaço em branco.

Output
Se o preço promocional for mais barato que o preço regular imprima, em uma
linha, a mensagem "Promocao"; caso contrário, imprima a mensagem "Enganacao".
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

  ull ammount1;
  ull price1;
  ull ammount2;
  ull price2;

  cin >> ammount1;
  cin >> price1;
  cin >> ammount2;
  cin >> price2;

  if (ammount1 * price2 < ammount2 * price1) {
    cout << "Promocao" << endl;
  } else {
    cout << "Enganacao" << endl;
  }

  return 0;
}
