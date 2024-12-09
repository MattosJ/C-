#include <iostream>
//Faça um programa que calcule o número médio de alunos por turma. Para isto, peça a quantidade de turmas e a quantidade de alunos para cada turma. As turmas não podem ter mais de 40 alunos.
int main(void){
  int numberOfClass;
  std :: cout <<"Enter number of class: " << std :: endl;
  std :: cin >> numberOfClass;
  int sum = 0;
  for(int i = 1; i<=numberOfClass; i++){
    int numberOfstudents;
    std :: cout <<"Enter number of Students: " << std :: endl;
    std :: cin >> numberOfstudents;
    while(numberOfstudents > 40 || numberOfstudents < 0){
      std :: cout <<"Enter number of Students: " << std :: endl;
      std :: cin >> numberOfstudents;
    }
    sum += numberOfstudents;
  }
  std :: cout << float(sum) / numberOfClass <<" Students for class.";
}