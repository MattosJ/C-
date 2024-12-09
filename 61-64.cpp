#include <iostream>

int main(void){

  char verific =' ';
  while(verific != 'n'  &&verific != 'N'){
    int number;
    std :: cout <<"Enter number: " << std :: endl;
    std :: cin >> number;
    long long int fat =1;

    for(int i = 1; i <= number; i++){
      fat = fat * i;
      std :: cout << fat <<" " ;

    }
    std :: cout <<"" << std :: endl;
    std :: cout <<"Want continue: " << std :: endl;
    std :: cin >> verific;
  }


  
}