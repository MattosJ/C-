#include <iostream>

int main(void){
  float priceStrawberry = 2.50;
  float priceApple = 1.80;
  float priceStrawberryPlus5 = 2.20;
  float priceApplePlus5 = 1.50;
  float kgStraw =0;
  float kgApple = 0;
  float totalStraw = 0;
  float totalApple = 0;
  float kgTotal = kgApple + kgStraw;

  std :: cout <<"******************************************" << std :: endl;
  std :: cout <<"Enter KG of Strawberry: " << std :: endl;
  std :: cin >> kgStraw;
  std :: cout <<"Enter KG of Apple: " << std :: endl;
  std :: cin >> kgApple;
  std :: cout <<"******************************************" << std :: endl;
  if(kgStraw > 5){
    priceStrawberry = priceStrawberryPlus5;
  }
  if(kgApple > 5){
    priceApple = priceApplePlus5;
  }
  totalStraw = kgStraw * priceStrawberry;
  totalApple = kgApple * priceApple;
  float total = totalStraw + totalApple;
  
  if(total > 25){
    total = (total) - (total * 0.10);
  }
  std :: cout <<"******************************************" << std :: endl;
  std :: cout <<"KG of strawberry: "<< kgStraw << std :: endl;
  std :: cout <<"Kg of Apple: " << kgApple << std :: endl;
  std :: cout <<total << std :: endl;

  
}