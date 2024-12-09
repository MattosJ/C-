#include <iostream>
// Faça um Programa que peça as quatro notas de 10 alunos, calcule e armazene numa lista a média de cada aluno, imprima o número de alunos com média maior ou igual a 7.0.
int main(){
  float averages[10];
  float grades[40];
  for(int i = 0 ; i < sizeof(grades)/sizeof(grades[0]); i++){
      float aux = 0;
      std :: cout <<"Enter grade " << i + 1 << std :: endl;
      std :: cin >> aux;
      grades[i] = aux;
  }
  int countUpp7 = 0;
  int j =0;
  for(int i = 0; i <  sizeof(grades)/sizeof(grades[0]); i += 4 ){
    float a = 0;
    a =( grades[i] + grades[i+1] + grades[i+2] + grades[i+3] ) / 4;
    averages[j] = a;
    if(a >= 7){
      countUpp7 ++;
    }
    j++;
  }
  std :: cout <<countUpp7 << std ::endl;
  for(float average : averages){
    std :: cout << average << std :: endl;
  }
  return 0;
}