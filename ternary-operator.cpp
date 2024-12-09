#include <iostream>

int main(){
  //Ternary operator ?: = replacement to an if/else statement
  // condition ? expression1 : expression2;
  int grade = 75;
  grade >= 60 ? std :: cout << "You pass!" << std :: endl : std :: cout << "You fail! " << std :: endl ;
  
  int number = 9;
  number % 2 == 1 ? std :: cout << "ODD" << std :: endl  : std :: cout << "Even" << std :: endl;

  bool hungry = true ;
  hungry ? std :: cout << "You are hungry" << std :: endl : std :: cout <<"You are full" << std :: endl;
  
  bool happy = false;
  std :: cout <<(happy ? "You are Happy" : "You are bad") << std :: endl;
  
  







  return 0;
}