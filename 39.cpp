#include <iostream>

int main(void){
  int number;
  std :: cout <<"Enter number: " << std :: endl;
  std :: cin >> number;
  if(number % 2 == 0){
    std :: cout <<"Is even" << std :: endl;
  }
  else{
    std :: cout<<"Is odd" << std :: endl;
  }

}