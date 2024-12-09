//Faça um programa que peça um número inteiro e determine se ele é ou não um número primo. Um número primo é aquele que é divisível somente por ele mesmo e por 1.
//Altere o programa de cálculo dos números primos, informando, caso o número não seja primo, por quais número ele é divisível.
#include <iostream>

int main(void){
  int number;
  int status = 0;
  std :: cout <<"Enter number: " << std :: endl;
  std :: cin >> number;
  for(int i = 2; i < number; i++){
    if(number % i == 0){
      std :: cout << i << std :: endl;
      status = 1;
    }
  }
  if(status == 0){
    std :: cout <<"Prime" << std :: endl;
  }
  else{
    std :: cout<<"Not prime" << std :: endl;
  }
}