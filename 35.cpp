#include <iostream>
//Para ser bissexto, o valor de ano precisa ser múltiplo de 4, exceto múltiplos de 100 que não são múltiplos de 400.
int main(void){
  int year;
  std :: cout <<"Enter year: " << std :: endl;
  std :: cin >> year;
  if(year % 100 == 0 && year % 400 != 0){
    std :: cout <<"Not" << std :: endl;
  }
  else if(year % 100 == 0 && year % 400 == 0){
    std :: cout <<"yes" << std :: endl;
  }
  else if(year % 4 == 0){
    std :: cout <<"Yes" << std :: endl;
  }
  else{
    std :: cout <<"Not" << std :: endl;
  }

}