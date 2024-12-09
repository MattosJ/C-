// Escreva um algoritmo que leia um número inteiro positivo e imprima todos os seus divisores.
//Ex: 
//Entrada = 20
//Saída = 1, 2, 5, 10, 20
#include <iostream>

int main(){
  int number;
  std :: cout <<"Enter number: " << std :: endl;
  std :: cin >> number;
  for(int i = 1; i <= number; i++){
    if(number % i == 0){
      std :: cout << i << " " ;
    }
  }
  int numberP;
  bool value = true;
  std :: cout <<"Enter number: " << std :: endl;
  std :: cin >> numberP;
  for(int i = 2;i < numberP; i++){
    if(numberP % i == 0){
      value = false;
      break;
    }
    else{
      value = true;
    }
  }
  if(value == true){
      std :: cout <<"Yes!" << std :: endl;
    }
    else{
      std :: cout <<"No!" << std :: endl;
    }



//- Escreva um programa que calcule e exiba a soma dos números pares de 1 a 100

  int sum = 0;
  for(int i = 0; i<= 100;i++){
    if(i % 2 == 0){
      sum += i;
    }
  }
  std :: cout << sum;

// Escreva um programa que calcule e exiba o fatorial de um número fornecido pelo usuário.

  int numberF;
  int fat = 1;
  std :: cout <<"Enter number" << std :: endl;
  std :: cin >> numberF;
  for(int i = numberF; i >= 1; i--){
    fat *= i;
  }
  std :: cout << fat << std :: endl;
  return 0;
}