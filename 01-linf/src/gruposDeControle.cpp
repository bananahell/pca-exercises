/*
B. Grupos de controle
time limit per test - 1 second
memory limit per test - 256 megabytes

Um instituto de pesquisa está conduzindo uma série de experimentos sociais, para
os quais se voluntariaram N indivíduos. Na próxima fase dos experimentos os
voluntários serão divididos em grupos de controle, e em cada grupo será aplicada
uma questão onde cada membro deve optar por uma das duas respostas disponíveis.
Para que cada pergunta tenha uma resposta majoritária, o número M de indivíduos
em cada grupo deve ser ímpar.

Você foi designado para montar os grupos de controle. A primeira tarefa é
determinar o número M de membros em cada grupo de controle, de tal forma que o
número de grupos distintos seja mínimo. Cada voluntário deve ser alocado a um
único grupo, todos os voluntários devem participar de algum grupo de controle e
todos os grupos devem ter o mesmo número de membros.

Input
A entrada é composta por uma única linha, que contém o inteiro N (1≤N≤10^(18)).

Output
Imprima, em uma linha, o número M de membros de cada grupo de controle que
minimiza a quantidade de grupos.
*/

#include <cstdio>

int main() {
  long long nPeople;

  scanf("%lld", &nPeople);

  while (nPeople % 2 == 0) {
    nPeople /= 2;
  }

  printf("%lld", nPeople);

  return 0;
}
