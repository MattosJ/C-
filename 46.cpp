#include <iostream>

int main(void){
  float grade;
  std :: cout <<"Enter grade(0-10): " << std :: endl;
  std :: cin >> grade;
  while(grade < 0 || grade > 10){
    std :: cout <<"invalid grade!" << std :: endl;
    std :: cout <<"Enter grade(0-10): " << std :: endl;
    std :: cin >> grade;
  }
}