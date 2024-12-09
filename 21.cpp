#include <iostream>

int main(void){
  char gender;
  std :: cout <<"Enter gender: "<< std :: endl;
  std :: cin >> gender;
  if(gender == 'F' || gender == 'f'){
    std :: cout <<"- Feminine" << std :: endl;
  }
  else if(gender == 'M' || gender == 'm'){
    std :: cout << "Masculine" << std :: endl;
  }
  else{
    std :: cout <<"The gender is invalid!" << std :: endl;
  }
}