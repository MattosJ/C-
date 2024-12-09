#include <iostream>
/*Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, e calcule a sua média.

A atribuição de conceitos obedece à tabela abaixo: Média de Aproveitamento Conceito Entre 9.0 e 10.0 A Entre 7.5 e 9.0 B Entre 6.0 e 7.5 C Entre 4.0 e 6.0 D Entre 4.0 e zero E

O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente e a mensagem “APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E.*/
int main(void){
  float grade1; float grade2; char concept;
  std :: cout <<"******Welcome to system***********" << std :: endl;
  std :: cout <<"Enter grade1: " << std :: endl;
  std :: cin >> grade1;
  std :: cout <<"Enter grade2: " << std :: endl;
  std :: cin >> grade2;
  float average = (grade1 + grade2) / 2;
  if(average >= 9){
    concept = 'A';
  }
  else if(average > 7.5 && average < 9){
    concept = 'B';
  }
  else if(average >= 6.0 && average <= 7.5 ){
    concept = 'C';
  }
  else if(average > 4.0 && average < 6.0){
    concept = 'D';
  }
  else if(average <= 4.0){
    concept = 'E';
  }
  if(concept == 'A' || concept == 'B' || concept == 'C'){
    std :: cout <<"************Summary*************" << std :: endl;
    std :: cout <<"Situation: Approved" << std :: endl;
    std :: cout <<"Concept: " << concept << std :: endl;
    std :: cout <<"Average: " << average << std :: endl;
    std :: cout <<"*************************" << std :: endl;
  }
  else{
    std :: cout <<"************Summary*************" << std :: endl;
    std :: cout <<"Situation: Dissapproved" << std :: endl;
    std :: cout <<"Concept: " << concept << std :: endl;
    std :: cout <<"Average: " << average << std :: endl;
    std :: cout <<"*************************" << std :: endl;
  }



}