//Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar: A mensagem "Aprovado", se a média alcançada for maior ou igual a sete; A mensagem "Reprovado", se a média for menor do que sete; A mensagem "Aprovado com Distinção", se a média for igual a dez.
#include <iostream>
int main(void){
  float grade1;
  std :: cout <<"Enter grade (0-10): " << std :: endl;
  std :: cin >> grade1;
  float grade2;
  std :: cout <<"Enter grade: (0-10)" << std :: endl;
  std :: cin >> grade2;
  float average = (grade1 + grade2) / 2;
  if(average == 10){
    std :: cout <<"Approved with distinction" << std :: endl;
  }
  else if(average >= 7){
    std :: cout <<"Approved" << std :: endl;
  }
  else{
    std :: cout <<"disapproved" << std :: endl;
  }
}