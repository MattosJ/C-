#include <iostream>
// Chico tem 1.50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce 3 centímetros por ano. Escreva um programa que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.


int main(){
  float chico = 1.50;
  float ze = 1.10;
  int years = 0;

  while(ze <= chico){
    chico += 0.02;
    ze += 0.03;
    years += 1;
    std :: cout << chico << std :: endl;
    std :: cout << ze << std :: endl;
    std :: cout << years << std :: endl;
  }

  std :: cout << chico << std :: endl;
  std :: cout << ze << std :: endl;
  std :: cout << years << std :: endl;


  int age = 1;
  int count = 0;
  int sum = 0;
  while(age > 0){
    std :: cout << "Enter age: " << std :: endl;
    std :: cin >> age;
    if(age <= 0){
      break;
    }
    count ++;
    sum += age;
  }

  std :: cout << float(sum) / count ;

  return 0;
}