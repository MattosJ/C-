//Faça um Programa que leia três números e mostre o maior deles.
//Faça um Programa que leia três números e mostre o maior e o menor deles.
//Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.

#include <iostream>

int main(void){
  int number[3];
  for(int i = 0; i < 3;i ++){
    std :: cout << "enter number: " << std :: endl;
    std :: cin >> number[i];
 }
  for(int i = 0; i < 3; i++){
    for(int j = i + 1; j < 3; j++){
      int aux;
      if (number[i] > number[j])
      {
       aux = number[i];
       number[i] = number[j];
       number[j] = aux;
      }
    }
  }
  std :: cout <<number[3] << std :: endl;
  std :: cout <<number[0] << std :: endl;
  for(int numb : number){
    std :: cout <<numb << std :: endl;
  }
}