#include <iostream>

int main(){
  float grade1;
  float grade2;

  std :: cout <<"Enter grade(0-10): ";
  std :: cin >> grade1;

  std :: cout <<"Enter grade(0-10): ";
  std :: cin >> grade2;

  if((grade1 < 0 || grade1 > 10) ||((grade2 < 0) ||(grade2 > 10))  ){
    std :: cout << "grade invalid!" << std :: endl;
  }
  else{
    std :: cout << (grade1 + grade2) / 2 << std :: endl;
  }



  int number; int number1;
  std :: cout <<"Enter number: " << std :: endl;
  std :: cin >> number;
  std :: cout <<"Enter number: " << std :: endl;
  std :: cin >> number1;

  if(number > number1){
    if(number % number1 == 0){
      std :: cout <<"Is mult " << number <<" " << number1 << std :: endl;
    }
    else{
      std :: cout <<"Not mult " << number <<" " << number1 << std :: endl;
    }
  }
  else if(number1 > number){
    if(number1 % number == 0){
      std :: cout <<"Is mult " << number1 <<" "  << number << std :: endl;
    }
    else{
      std :: cout <<"Not mult " << number1 <<" "  << number << std :: endl;
    }
  }
  else{
    std :: cout <<"Numbers eguals " << std :: endl;
  }


  int x;
  int y;
  int aux;
  std :: cout <<"Enter x: " << std :: endl;
  std :: cin >> x;

  std :: cout <<"Enter y: " << std :: endl;
  std :: cin >> y;

  if(x != y){
    aux = y;
    y = x;
    x = aux;
    std :: cout <<"The vaule of x is: " << x << std :: endl;
    std :: cout <<"The value of y is: " << y << std :: endl;
  }
  else{
    std :: cout <<"The number is equals";
  }

  
  return 0;
}