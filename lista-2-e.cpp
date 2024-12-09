#include <iostream>

int main(){
  int number;
  std:: cout << "Enter number with 3 digits: ";
  std :: cin >> number;
  if(number < 100 || (number > 999)){
    std :: cout <<"Number not valid!" << std :: endl;
  }
  else{
    std :: cout << number / 100 << " " << (number/10) % 10 << " " << number % 10  << std :: endl; 

  }


  int year;
  std :: cout << "Enter year: " << std :: endl;
  std :: cin >> year;
  if(year%4 != 0 ){
    std :: cout <<"Not bissexto" << std :: endl;
  }
  else if((year % 4 == 0) && (year % 100 != 0)){
    std :: cout <<"bissexto" << std :: endl;
  }
  else if((year % 4 == 0) && (year % 100 == 0) && (year%400 != 0)){
    std :: cout <<"Not bissexto" << std :: endl;
  }
  else{
    std :: cout <<"bissexto" << std :: endl;
  }
  return 0;
}