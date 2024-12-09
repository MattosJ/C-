#include <iostream>

int main(){

  float number1;
  float number2;
  std :: cout <<"enter number: " << std :: endl;
  std :: cin >> number1;
  std :: cout <<"enter number: " << std :: endl;
  std :: cin >> number2;

  if(number1 > number2){
    std :: cout << number1 << std :: endl;
  }
  else if(number2 > number1){
    std :: cout << number2 << std :: endl;
  }
  else{
    std :: cout << "The numbers is equals" << std :: endl;
  }


  float number3;
  std :: cout <<"Enter number: " << std :: endl;
  std :: cin >> number3;
  if(number3 >= 0){
    std :: cout << number3 * number3 << std :: endl;
  }
  else{
    std :: cout <<"the number is < 0" << std :: endl;
  }


  int number4;
  std :: cout <<"Enter number: " << std :: endl;
  std :: cin >> number4;
  if(number4 % 2 == 0){
    std :: cout <<"Is even" << std :: endl;
  }
  else{
    std :: cout <<"Is odd" << std :: endl;
  }
  
  float number5;
  float number6;
  std :: cout <<"enter number: " << std :: endl;
  std :: cin >> number5;
  std :: cout <<"enter number: " << std :: endl;
  std :: cin >> number6;
  if(number5 > number6){
    std :: cout << number5 << " The differences is: " << number5 - number6 << std :: endl;
  }
  else if(number6 > number5){
    std :: cout << number6 << " The differences is: " << number6 - number5 << std :: endl;
  }
  else{
    std :: cout << " The numbers is equals" << "The difference is: 0" << std:: endl;
  }

  return 0;
}