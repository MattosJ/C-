#include <iostream>

int main(void){
  float contryA = 0; 
  float contryB = 0;
  int year = 0;
  float taxA= 0;
  float taxB = 0;
  
  std :: cout <<"********************" << std :: endl;
  std :: cout <<"Enter population of Country A: " << std :: endl;
  std :: cin >> contryA;

  std :: cout <<"********************" << std :: endl;
  std :: cout <<"Enter population of Country B: " << std :: endl;
  std :: cin >> contryB;

  std :: cout <<"********************" << std :: endl;
  std :: cout <<"Enter taxA: " << std :: endl;
  std :: cin >> taxA;

  std :: cout <<"********************" << std :: endl;
  std :: cout <<"Enter taxB: " << std :: endl;
  std :: cin >> taxB;


  while (contryA < contryB){
    contryA = contryA + (contryA * taxA);
    contryB = contryB + (contryB * taxB);
    year ++;
  }
  
  std :: cout <<"******************************************" << std :: endl;
  std :: cout << "in: " << year << std :: endl;
  std :: cout <<" The conntryA  have population: " << contryA << std :: endl;
  std :: cout <<" The conntryB  have population: " << contryB << std :: endl;
  std :: cout <<"******************************************" << std :: endl;

}