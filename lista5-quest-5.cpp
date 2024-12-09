#include <iostream>
//Crie um programa que leia 5 números inteiros e os armazene em uma lista. Mostre na tela o maior elemento da lista e a posição que ele se encontra.

int main(){

  const int SIZE = 5;
  int numbers[SIZE];
  int upper = -99999999;
  for(int i = 0; i < SIZE; i++){
    int aux = 0;
    std :: cout <<"Enter number: " << std :: endl;
    std :: cin >> aux;
    numbers[i] = aux;
  }
  for(int numero : numbers){
    if(numero  > upper){
      upper = numero;
    }
  }
  std :: cout << upper << std :: endl;

  return 0;
}