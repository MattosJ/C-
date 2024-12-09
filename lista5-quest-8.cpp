#include <iostream>
// Faça um programa que receba do usuário duas listas, A e B, com 10 números inteiros cada. Crie uma nova lista denominada C calculando C = A - B. Mostre na tela os dados da lista C.

int main(){

  int a[10];
  int b[10];
  int c[10];

  for(int i = 0; i < sizeof(a)/sizeof(a[0]);i++){
    int aux = 0;
    std :: cout << "Enter number list A: " << std :: endl;
    std :: cin >> aux;
    a[i] = aux;
    std :: cout << "Enter number list B: " << std :: endl;
    std :: cin >> aux;
    b[i] = aux;


  }
  for(int i = 0; i < sizeof(a)/sizeof(a[i]);i++){
    c[i] = a[i] - b[i];
  }
  for(int letter : c){
    std :: cout << letter << std :: endl;
  }



  return 0;
}