#include <iostream>
//  Escreva um algoritmo que leia um número inteiro entre 100 e N maior que zero e imprima cada um dos dígitos que compõem o número.

int main(){
  int i = 0;
  int lenghVetor = 1;
  int numbers[lenghVetor];
  int number;
  std :: cout << " Enter number :" << std :: endl;
  std :: cin >> number;
  while(number < 100){
    std :: cout << " Enter number :" << std :: endl;
    std :: cin >> number;
  }
  float rest = number;
  while (rest != 0){
      numbers[i] = number % 10;
      number = number / 10;
      rest = number;
      i ++;
      lenghVetor ++;
  }
  

  for(int o = i - 1; o>= 0; o--){
    std :: cout <<  numbers[o] << std :: endl;
  }

  return 0;
}