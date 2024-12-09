#include <iostream>

int main(){
  //Escreva um programa que calcule e exiba a média aritmética de uma lista de notas fornecidas pelo usuário. O programa deve solicitar ao usuário a quantidade de notas e, em seguida, pedir que ele insira cada nota individualme
  int amountGrades;
  std :: cout <<"Enter amount Grades: " << std :: endl;
  std :: cin >> amountGrades;
  float sum = 0;
  for(int i = 0; i < amountGrades; i++){
    float aux = 0;
    std :: cout <<"Enter grade: " << std :: endl;
    std :: cin >> aux;
    sum += aux;

  }

  std :: cout << sum / amountGrades << std :: endl;
//- Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. Ex: a soma dos divisores do número 20 é 1 + 2 + 4 + 5 + 10  = 22.

  int number;
  int sum2 = 0;
  std :: cout <<"Enter number: " << std :: endl;
  std :: cin >> number;
  for(int i = 1; i < number; i++){
    if(number % i == 0){
      sum2 += i;
    }
  }
  std :: cout << sum2 << std :: endl;


//Faça um programa que encontre o primeiro número múltiplo de 7, 11 e 13 após um número inteiro digitado pelo usuário.

  int number2;
  std :: cout <<"Enter number " << std :: endl;
  std :: cin >> number2;
  bool mult = false;
  int i = number2;
  while(mult == false){
    if(((i + 1) % 7 == 0) && (((i + 1)) % 11 == 0) && (((i + 1)) % 13 == 0)){
      mult = true;
      std :: cout << i+1 << std :: endl;
      break;
    }
    else{
      i++;
    }
  }

  int hamonic;
  std :: cout << "Enter number" << std :: endl;
  std :: cin >> hamonic;
  float sumH = 0;
  for(int i =1; i <= hamonic;i++){
    sumH = sumH + (float(1)/i);
    std :: cout << sumH << std :: endl;
  }

  return 0;
}