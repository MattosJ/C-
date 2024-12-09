#include <iostream>
// do while loop = do some block code first.
// then repeat again if condition is true.
int main(){

  int number ;

  do{
    std :: cout << "Enter a positive #: ";
    std :: cin >> number;
    
  }while(number < 0);

  std :: cout << "The number is  " << number;


  return 0;
}