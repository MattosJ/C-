#include <iostream>

int main(void){
  int amountO_25 = 0;
  int amount26_50 = 0;
  int amount51_75 = 0;
  int amount76_100 = 0;
  int number = 0;
  while (number >= 0){
    std :: cout <<"Enter number(negative of break): " << std :: endl;
    std :: cin >> number;
    if(number < 26){
      amountO_25 ++;
    }
    else if(number < 51){
      amount26_50 ++;
    }
    else if(number < 76){
      amount51_75 ++;
    }
    else if(number < 101){
      amount76_100 ++;
    }
  }

  std :: cout << "Amount 0-25: " << amountO_25 << std :: endl;
  std :: cout << "Amount 26-50: " << amount26_50 << std :: endl;
  std :: cout << "Amount 51-75: " << amount51_75 << std :: endl;
  std :: cout << "Amount 76-100: " << amount76_100 << std :: endl;
  
}