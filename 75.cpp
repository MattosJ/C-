#include <iostream>

int main(void){
  float valueTotal = 0;
  float value = 1;
  int product = 1;
  std :: cout <<"Store Tabajara" << std :: endl;
  while (true){
    std :: cout<<"Product "<<product <<": $ ";
    std :: cin >> value;
    if(value <= 0){
      break;
    }
    valueTotal += value;
    product ++;
  }
  std :: cout <<"Total value: " << valueTotal <<std :: endl;
  float amountPaid;
  std ::cout <<"Enter Amount Paid: " << std :: endl;
  std :: cin >> amountPaid;
  while(amountPaid < valueTotal){
    std ::cout <<"Enter Amount Paid: " << std :: endl;
    std :: cin >> amountPaid;
  }
  std :: cout <<"Change: " << amountPaid - valueTotal;
}