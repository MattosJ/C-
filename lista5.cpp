#include <iostream>
//Crie um programa que lê do usuário 5 valores inteiros, armazena os valores em uma lista e, em seguida, mostre na tela os valores lidos
int main(){
  int number = 0;
  int numbers[number];
  for(int i = number; i< 5; i++){
    int aux = 0;
    std :: cout <<"Enter number: " << std :: endl;
    std :: cin >> aux;
    numbers[i] = aux;
    number ++;
   
  }
  for(int o = 0; o < 5; o ++){
    std :: cout << numbers[o] << std :: endl;
  }
 




  return 0;
}