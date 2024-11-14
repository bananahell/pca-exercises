/*
F. Maratona no LINF
time limit per test - 1 second
memory limit per test - 256 megabytes

O professor Guilherme está organizando uma competição de programação no
Laboratório de Informática (LINF). Ele verificou que o local possui capacidade
para receber, no máximo, C competidores. O professor também ficou responsável
pelas inscrições das equipes. De acordo com as regras dessa competição, uma
equipe é considerada válida (completa) se ela contém exatamente 3 competidores.
Entretanto, muitos deles não se atentaram a essa regra e inscreveram suas
equipes com uma quantidade variada de membros.

Agora o professor Guilherme tenta organizar as equipes de forma a respeitar as
regras da competição. Ao encontrar uma equipe com 4 competidores, ele retira um
deles e aloca em alguma outra equipe que ainda não está completa. Ele também
pode unir equipes com menos de três competidores para formar novas equipes
válidas, podendo-se até pegar competidores que foram retirados de outras
equipes.

Com os demais professores do grupo "Maratona DF" ocupados com outras demandas
(elaboração do caderno de questões, configuração do BOCA, compra de
coffee-break, etc.), o professor Guilherme pede sua ajuda. Determine a
quantidade de equipes que participarão da Maratona de Programação, considerando
a capacidade máxima de competidores que o LINF pode receber e as regras da
competição.

Input
A primeira linha da entrada contém dois números inteiros N e C (1≤N,C≤2×105),
separados por um espaço em branco, indicando a quantidade de equipes
participantes e a capacidade máxima do LINF, respectivamente.

A segunda linha da entrada contém N inteiros a1,a2,…,aN (ai∈{1,2,3,4}),
separados por um espaço em branco, representando a quantidade de membros em cada
equipe.

Output
Imprima um único número inteiro, o qual corresponde à resposta do problema: a
quantidade de equipes que participarão da Maratona de Programação no LINF, sem
exceder a capacidade máxima de competidores e respeitando as regras da
competição.
*/

#include <bits/stdc++.h>

#include <cstdio>
#include <vector>

int main() {
  int teamsAmmount;

  int maxCap;

  int auxSize;

  int peopleSum = 0;

  std::vector<int> teamSizes;

  std::ios::sync_with_stdio(false);
  std::cout.tie(0);
  std::cin.tie(0);

  std::cin >> teamsAmmount >> maxCap;

  for (int i = 0; i < teamsAmmount; i++) {
    std::cin >> auxSize;
    teamSizes.push_back(auxSize);
  }

  for (unsigned i = 0; i < teamSizes.size(); i++) {
    peopleSum += teamSizes.at(i);
  }

  if (peopleSum > maxCap) {
    std::cout << maxCap / 3;
  } else {
    std::cout << peopleSum / 3;
  }

  return 0;
}
