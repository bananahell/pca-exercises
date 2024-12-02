/*
D. Corretor Automático
time limit per test - 1 second
memory limit per test - 256 megabytes
O professor Fagundes, cansado de passar intermináveis horas corrigindo as provas
de seus alunos, resolveu mudar a sua metodologia de avaliação. Agora, o
professor só elabora provas com questões de múltipla escolha.

Querendo poupar ainda mais esforço, Fagundes contratou você como estagiário para
bolar um sistema que: leia as opções marcadas pelo aluno, compare-as com o
gabarito, e dê a nota final.

Input
A primeira linha da entrada consiste de um inteiro N (1≤N≤200) que indica o
número de questões da prova do prof. Fagundes.

Em seguida, há N linhas contendo dois caracteres maiúsculos separados por espaço
e que podem assumir valores de 'A' a 'E'. O primeiro caractere representa a
opção marcada pelo aluno enquanto o segundo representa a opção correta,
fornecida pelo gabarito

Output
Imprima, em uma linha, as palavras "Nota: <x>", em que "<x>" representa a nota
do aluno de 0 a 10 com precisão de 2 casas decimais.

Para cada caso de teste, se sua resposta é y e a resposta do juiz é z , sua
resposta será considerada correta se (|y−z|/max(1,z)) ≤ 10−2.
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

  ull ammount;
  char studentAnswer;
  char correctAnswer;
  ull total = 0;
  ull grade = 0;
  double finalGrade;

  cin >> ammount;

  for (unsigned i = 0; i < ammount; i++) {
    cin >> studentAnswer;
    cin >> correctAnswer;

    total++;
    if (studentAnswer - correctAnswer == 0) {
      grade++;
    }
  }

  finalGrade = ((double)grade / total) * 10;

  cout << fixed << setprecision(2);
  cout << "Nota: " << finalGrade << endl;

  return 0;
}
