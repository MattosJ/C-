#include <iostream>
// arry = a data structure that can hold multiple values.
//values are acessed by an index number.
// kind of like a variable that holds multiple values.
int main(){
  std :: string cars[] = {"Corvette","Mustang","Camry"};
  cars[0] = "Camaro";

  for (std :: string i : cars){
    std :: cout << i << std:: endl;
  }
  
  double prices[] = {5.00,7.50,9.99,15.00};

  for(int i : prices){
    std :: cout << i << std :: endl;
  }
  
  




  return 0;
}