#include <iostream>
#include <cmath>

int main(void){
  float number1;
  float number2;
  char op;
  float number3;
  std :: cout <<"Enter number1: " << std :: endl;
  std :: cin >> number1;
  std :: cout <<"Enter number2: " << std :: endl;
  std :: cin >> number2;
  std :: cout <<"*************************************" << std :: endl;
  std :: cout <<"Enter + for +" << std :: endl;
  std :: cout <<"Enter - for sub" << std :: endl;
  std :: cout <<"Enter * for mult" << std :: endl;
  std :: cout <<"Enter / for div" << std :: endl;
  std :: cin >> op;
  std :: cout << op << std :: endl;
  switch (op)
  {
  case '+':
    std :: cout << number1 + number2 << std :: endl;
    number3 = number1 + number2;
    break;
  case '-':
    std :: cout << number1 - number2 << std :: endl;
    number3 = number1 - number2;
    break;
  case '*':
    std :: cout << number1 * number2 << std :: endl;
    number3 = number1 * number2;
    break;
  case '/':
    std :: cout << number1 / number2 << std :: endl;
    number3 = number1 / number2;
    break;
  default:
    std :: cout <<"the op is invalid!" << std :: endl;
    break;
  }

 if(number3 > 0){
    std :: cout <<"Is positive" << std :: endl;
  }
  else{
    std :: cout <<"Is negativ" << std :: endl;
  }

  if(floor(number3) == number3){
    std :: cout <<"Is int" << std :: endl;
  }
  else{
    std :: cout <<"Is float" << std :: endl;
  }
  if(int(number3) % 2 == 0){
    std :: cout <<"Is even" << std :: endl;
  }
  else{
    std :: cout <<"Is odd" << std :: endl;
  }
  
}