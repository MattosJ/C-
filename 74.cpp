#include <iostream>
//O Sr. Manoel Joaquim acaba de adquirir uma panificadora e pretende implantar a metodologia da tabelinha, que já é um sucesso na sua loja de 1,99.

//Você foi contratado para desenvolver o programa que monta a tabela de preços de pães, de 1 até 50 pães, a partir do preço do pão informado pelo usuário, conforme o exemplo abaixo:
int main(void){
  float priceOfBread;
  std :: cout <<"Enter the price of bread: " << std :: endl;
  std :: cin >> priceOfBread;
  std :: cout<<"Price of Bread: " << priceOfBread << std :: endl;
  for(int i = 1; i<= 50; i++){
    std :: cout << i << " Breads  |" << "value: " << i * priceOfBread <<"$" << std :: endl;
  }
}