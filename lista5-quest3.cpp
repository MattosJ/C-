#include <iostream>
//Faça um programa que leia uma lista de 10 números reais e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições (índices) na lista. Ao final, seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y. Informe ao usuário caso os valores de X ou Y sejam posições inválidas da lista.

int main(){
  int num = 10;
  float number[num];
   for(int i = 0; i < 10;i++){
    float aux = 0.0;
    std :: cout <<"Enter number: " << std :: endl;
    std :: cin >> aux;
    number[i] = aux;
  }
  int x;
  int y;
  std :: cout <<"Enter x:" << std :: endl;
  std :: cin >> x;
  std :: cout <<"Enter y: " << std :: endl;
  std :: cin >> y;
  if(x > sizeof(number)/sizeof(number[0]) || y > sizeof(number)/sizeof(number[0]) ){
    std :: cout <<"X or Y invalid" << std :: endl;
  }
  else{
    std :: cout << number[x] << std :: endl;
    std :: cout << number[y] << std :: endl;
  }
  return 0;
}