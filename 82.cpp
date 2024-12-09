/*Faça um programa que receba o valor de uma dívida e mostre uma tabela com os seguintes dados: valor da dívida, valor dos juros, quantidade de parcelas e valor da parcela.

Os juros e a quantidade de parcelas seguem a tabela abaixo: Quantidade de Parcelas % de Juros sobre o valor inicial da dívida 1 0 3 10 6 15 9 20 12 25

Exemplo de saída do programa: Valor da Dívida Valor dos Juros Quantidade de Parcelas Valor da Parcela R$ 1.000,00 0 1 R$ 1.000,00 R$ 1.100,00 100 3 R$ 366,00 R$ 1.150,00 150 6 R$ 191,67 */

#include <iostream>

int main(void){
  float debt;
  std :: cout <<"Enter the debt: " << std :: endl;
  std :: cin >> debt;
  int parcel;
  std :: cout <<"Enter the parcel: " << std :: endl;
  std :: cin >> parcel;

  float fess;

  while(parcel > 12 || parcel < 1){
    std :: cout <<"Enter the parcel: " << std :: endl;
    std :: cin >> parcel;
  }
  if(parcel < 3){
    fess = 0;
  }
  else if(parcel >= 3 && parcel < 6){
    fess = 0.10;
  }
  else if(parcel >= 6 && parcel < 9){
    fess = 0.15;
  }
  else if(parcel >= 9 && parcel < 12){
    fess = 0.20;
  }
  else{
    fess = 0.25;
  }  
  
  float totalDebt = debt + (debt * fess);
  float parcels = totalDebt / parcel;

  std :: cout <<"Initial debt: " << debt << std :: endl;
  std :: cout <<"The amount of parcel: " << parcel << std :: endl;
  std :: cout <<"The tax of fess : " << (fess * 100)<<"%" << std :: endl;
  std :: cout <<"The value of Parcels: " << parcels << std :: endl;
  std :: cout <<"The value total paid: " << totalDebt << std :: endl;
}