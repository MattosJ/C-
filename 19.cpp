//Faça um Programa que peça dois números e imprima o maior deles.
#include <iostream>

int main(void){
  int x;
  int y;
  std :: cout <<"Enter number: " << std :: endl;
  std :: cin >> x;
  std :: cout <<"Enter number: " << std :: endl;
  std :: cin >> y;
  if(x > y){
    std :: cout <<"The bigger is: " << x << std :: endl;
  }
  else if(x < y){
    std :: cout <<"The bigger is: " << y << std :: endl;
  }
  else{
    std :: cout <<"The numbers is equals " << x <<" = " <<y << std :: endl;
  }

}