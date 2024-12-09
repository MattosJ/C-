#include <iostream>

int main(){
  char op; double num1; double num2;
  std :: cout << "****************Calculator****************" << std :: endl;
  std :: cout << "Enter either (+ -  * /)" ;
  std :: cin >> op;
  std :: cout << "******************************************" << std :: endl;

  std:: cout << "Enter number 1: ";
  std :: cin >> num1;

  std:: cout << "Enter number 2: ";
  std :: cin >> num2;
  
  switch (op)
  {
  case '+':
    std :: cout << "Result: "<< num1 + num2 << std :: endl;
    break;
  case '-':
    std :: cout << "Result: " << num1 - num2 << std :: endl;
    break;
  case '*':
    std :: cout << "Result: " << num1 * num2 << std :: endl;
    break;
  case '/':
    std :: cout << "Result: " << num1 / num2 << std :: endl;
    break;
  default:
    std :: cout << "This case not exist";
    break;
  }

  return 0;
}