/*
A. Array Bonito
time limit per test - 1 s.
memory limit per test - 256 MB
Vamos chamar de bonito um array a contendo n números inteiros positivos (maiores
que 0) se a seguinte condição for satisfeita para todo i de 1 a n: ou ai=1, ou
pelo menos um dos números ai−1 e ai−2 também está presente no array.

Por exemplo:

o array [5,3,1] é bonito: para a1, o número a1−2=3 está presente no array; para
a2, o número a2−2=1 está presente no array; para a3, a condição a3=1 é
satisfeita; o array [1,2,2,2,2] é bonito: para a1, a condição a1=1 é satisfeita;
para cada outro número ai, o número ai−1=1 está presente no array; o array [1,4]
não é bonito: para a2, nem a2−2=2 nem a2−1=3 estão presentes no array, e a2≠1;
o array [2] não é bonito: para a1, nem a1−1=1 nem a1−2=0 estão presentes no
array, e a1≠1; o array [2,1,3] é bonito: para a1, o número a1−1=1 está presente
no array; para a2, a condição a2=1 é satisfeita; para a3, o número a3−2=1 está
presente no array. Você recebe um inteiro positivo s. Encontre o menor tamanho
possível de um array bonito cuja soma dos elementos seja igual a s.

Input
A primeira linha contém um inteiro t (1≤t≤5000) — o número de casos de teste.

As próximas t linhas contêm, cada uma, um inteiro s (1≤s≤5000) correspondente ao
i-ésimo caso de teste.

Output
Imprima t inteiros, onde o i-ésimo inteiro deve ser a resposta para o i-ésimo
caso de teste: o menor tamanho possível de um array bonito cuja soma dos
elementos seja igual a s.
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
  ull size;
  ull sum;
  ull nums;
  ull result;
  cin >> testCases;

  for (unsigned i = 0; i < testCases; i++) {
    cin >> size;
    if (size == 1) {
      cout << "1" << endl;
      continue;
    }
    nums = 1;
    result = 0;
    sum = 0;
    do {
      result++;
      sum += nums;
      nums += 2;
    } while (sum + nums < size);
    cout << result + 1 << endl;
  }

  return 0;
}
