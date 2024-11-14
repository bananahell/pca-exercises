/*
C. Cara ou Corona
time limit per test - 1 second
memory limit per test - 256 megabytes
Borjão gostava de correr pela cidade para se livrar do estresse, mas em tempo de
quarentena sua mobilidade foi limitada e ele precisa de alternativas para não
ter um piripaque.

Ele bolou um jogo para se distrair: cara ou corona! As regras são simples: ele
joga uma moeda; se der cara ele liga para um amigo para uma conversa casual,
caso contrário ele toma uma garrafa de sua cerveja favorita. Para tornar o jogo
mais interessante, ele sempre usa moedas desbalanceadas (com probabilidades
diferentes para cada lado), mas nunca se lembra qual usou no dia seguinte.

Ajude Borjão a saber qual o desbalanceamento da moeda utilizada!

Input
A entrada consiste de uma linha contendo um inteiro L e outro G, 0≤L,G≤100,
indicando a quantidade de ligações e a quantidade de garrafas vazias decorrentes
do jogo, respectivamente. É garantido que houve pelo menos uma rodada do jogo.

Output
Mostre, em uma linha, apenas a parte inteira dos percentuais de probabilidade
para cara e corona, nesta ordem.
*/

#include <cstdio>

int main() {
  int calls;
  int bottles;
  int total;

  scanf("%d %d", &calls, &bottles);

  total = calls + bottles;

  printf("%d %d", (calls * 100) / total, (bottles * 100) / total);

  return 0;
}
