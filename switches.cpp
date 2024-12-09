#include <iostream>
// switch = alternative to using many "else if" statements
// compare one value against matching cases
int main(){
  int month;
  std :: cout << "Enter the moth (1-12): ";
  std :: cin >> month;

  switch (month)
  {
  case 1:
    std :: cout << "It is January" << std :: endl;
    break;
  case 2:
    std :: cout << "It is February" << std :: endl;
    break;
  case 3:
    std :: cout << "It is March" << std :: endl;
    break;
  case 4:
    std :: cout << "It is April" << std :: endl;
    break;
  case 5:
    std :: cout << "It is  May" << std :: endl;
    break;
  case 6:
    std :: cout << "It is June " << std :: endl;
    break;
  case 7:
    std :: cout << "It is July" << std :: endl;
    break;
  case 8:
    std :: cout << "It is  Agust" << std :: endl;
    break;
  case 9 :
    std :: cout << "It is September" << std :: endl;
    break;
  case 10 : 
    std :: cout << "It is October" << std :: endl;
    break;
  case 11:
    std :: cout << "It is November" << std :: endl;
    break;
  case 12:
    std :: cout << "It is December" << std :: endl;
    break;
  default:
    std:: cout << "This month not exist! " << std :: endl;
    break;
  }
  char grade;
  std :: cout << "What letter grade?: ";
  std :: cin >> grade;

  switch (grade)
  {
  case 'A':
   std :: cout << "You did great!";
    break;
  case 'B':
    std :: cout << "You did good!";
    break;
  case 'C':
    std :: cout << "You did okay";
    break;
  case 'D':
    std :: cout << "You did not do good";
    break;
  case 'F':
    std :: cout << "You did FAILED ";
    break;  
  default:
    std :: cout << "This avaliator not exist!";
    break;
  }

  return 0;
}