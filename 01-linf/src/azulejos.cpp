/*
E. Azulejos
time limit per test - 1 second
memory limit per test - 256 megabytes
Edson está construindo sua casa e planeja revestir uma parede com lajotas que
possuem as cores da Sociedade Esportiva do Gama, seu clube de coração. Essa
parede possui dimensões N×M m2 (altura × largura), em que cada azulejo possui
dimensão 1×1 m2, sendo ou da cor verde ou da cor branca.

A parede será revestida como se fosse uma malha, em que deve-se alternar as
cores dos azulejos. Assim, a cor do azulejo na posição (i,j) deve ser diferente
da cor dos azulejos vizinhos na vertical e na horizontal. O azulejo na posição
(1,1) (canto esquerdo superior da parede) sempre recebe a cor verde. A figura
abaixo ilustra uma parede 3×3 revestida conforme o processo descrito acima:

Edson sabe que é mais fácil obter azulejos brancos do que azulejos verdes no
comércio do Distrito Federal. Para que não falte nenhum tipo de azulejo no
revestimento dessa parede, ajude-o a determinar a quantidade total de azulejos
verdes que serão utilizados.

Input
A primeira linha da entrada contém dois números inteiros N e M (1≤N,M≤2⋅109)
separados por espaço em branco indicando a altura e a largura da parede,
respectivamente.

Output
Imprima um único número inteiro com a resposta do problema: a quantidade de
azulejos verdes que serão utilizados para compor o revestimento da parede.
*/

#include <cstdio>

int main() {
  long long width;

  long long height;

  scanf("%lld %lld", &width, &height);

  printf("%lld", ((width * height) + 1) / 2);

  return 0;
}
