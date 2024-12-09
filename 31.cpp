#include <iostream>

int main(void){
  int day;
  std :: cout <<"Enter number of de day: " << std :: endl;
  std :: cin >> day;
  switch (day)
  {
  case 1:
    std :: cout <<"sunday" << std :: endl;
    break;
  
  case 2:
    std :: cout <<"Monday" << std :: endl;
    break;
 
  case 3:
    std :: cout <<"Tuesday" << std :: endl;
    break;
  
  case 4:
    std :: cout <<"Wednesday" << std :: endl;
    break;
  case 5:
    std :: cout <<"Thursday" << std :: endl;
    break;
 
  case 6:
    std :: cout <<"Friday" << std :: endl;
    break;
  
  case 7:
    std :: cout <<"Saturday" << std :: endl;
    break;
  default:
    std :: cout <<"invalid" << std :: endl;
    break;
  }
}