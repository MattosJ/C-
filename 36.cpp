#include <iostream>
//Faça um Programa que peça uma data no formato dd/mm/aaaa e determine se a mesma é uma data válida.

int main(void){
  int day; int month; int year;
  std :: cout <<"Enter Day: " << std :: endl;
  std :: cin >> day;
  std :: cout <<"Enter month: " << std :: endl;
  std :: cin >> month;
  std :: cout <<"Enter year: " << std :: endl;
  std :: cin >> year;
  if(day < 1 || day > 31){
    std :: cout <<"Invalid " << std :: endl;
  }
  else if(month == 2 && day > 29){
    std :: cout <<"Invalid" << std :: endl;
  }
  else if(month == 4  && day > 30 || month == 6  && day > 30 ||  month == 9  && day > 30 || month == 11  && day > 30){
    std :: cout <<"Invalid" << std :: endl;
  }
  else if( month < 1 || month > 12){
    std :: cout <<"Invalid " << std :: endl;
  }
  else if(year < 1){
    std :: cout <<"Invalid " << std :: endl;
  }
}