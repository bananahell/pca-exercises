/*
D. Ki-Sorte!
time limit per test - 1 second
memory limit per test - 256 megabytes
No pequeno vilarejo de Grotão das Neves corre, semanalmente, a loteria Ki-Sorte!
Cada um dos moradores pode adquirir um único bilhete, e cada bilhete contém um
número inteiro x entre 1 e 99 - são tão poucos moradores que há bilhetes para
todos e ainda sobra...

No sábado são sorteados três números A,B e C e a cada bilhete x gera um número
da sorte S(x)=|x−A|+|x−B|^(2)+|x−C|^(3)

Será o vencedor o portador do bilhete que gera o menor número da sorte. Como o
município tem poucos recursos, o resultado demora a sair, uma vez que os números
da sorte são computadores manualmente. Auxilie o povo de Grotão das Neves
escrevendo um programa que, dados os valores de A,B e C, determine o número do
bilhete premiado.

Input
A entrada contém uma única linha, com os inteiros A,B e C (1≤A,B,C≤99),
separados por um espaço em branco.

Output
Imprima, em uma linha, o número do bilhete vencedor. Se dois ou mais bilhetes
geram o número da sorte mínimo, imprima qualquer um deles.
*/

#include <cmath>
#include <cstdio>

int main() {
  int numA;

  int numB;

  int numC;

  long double smallestNum = 98000000;

  int smallestIndex = 0;

  double currNum;

  scanf("%d %d %d", &numA, &numB, &numC);

  for (int i = 1; i < 100; i++) {
    currNum = abs(i - numA) + pow(i - numB, 2) + pow(abs(i - numC), 3);
    if (currNum < smallestNum) {
      smallestNum = currNum;
      smallestIndex = i;
    }
  }

  printf("%d", smallestIndex);

  return 0;
}
