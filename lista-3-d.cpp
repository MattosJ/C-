#include <iostream>

int main(){
  float wage;
  float loan;

  std :: cout <<"Enter wage: " << std :: endl;
  std :: cin >> wage;

  std :: cout <<"Enter loan parcel: " << std:: endl;
  std :: cin >> loan;

  if((wage/5) < loan){
    std :: cout <<"The loan not authorized! " << std :: endl;
  }
  else{
    std :: cout <<"The loan authorized!" << std :: endl;
  }


  float age;
  float serviceTemp;

  std :: cout <<"Enter you age: " << std :: endl;
  std :: cin >> age;

  std :: cout <<"Enter service Temp: " << std :: endl;
  std :: cin >> serviceTemp;

  if(age > 60 && serviceTemp >= 30){
    std :: cout <<"YES" << std :: endl;
  }
  else{
    std :: cout <<"NO" << std :: endl;
  }
  return 0;
}