#include <iostream>

int main(){
  // arithmetic operators = return the result of a specific
  // arithmetic operation ( + - * /)
  //precedence
  // Parenthesis
  // multiplication & division
  // addition & subtraction

  int students = 20;
  students += 1;
  students ++;
  students = students - 1;
  students -= 1;
  students -= 2;
  students --;
  students = students * 2;
  students *= 2;
  students = students / 2;
  students /= 2;
  std :: cout << students << std :: endl;

  int remainder = students % 2;
  std :: cout << remainder;

  return 0;
}