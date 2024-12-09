#include <iostream>
#include <ctime>

int main(){
  srand(time(0));
  int randNumb = rand() % 5 + 1;

  switch (randNumb)
  {
  case  1:
   std :: cout <<"You win a bumper sticker" << std :: endl;
    break;
  case 2:
    std :: cout <<"You win a t-shirt!" << std :: endl;
    break;
  case 3:
    std :: cout <<"You win a free lunch" << std :: endl;
    break;
  case 4:
    std :: cout <<"You win a gift card!" << std :: endl;
    break;
  case 5:
    std :: cout <<"You win concert tickets" << std :: endl;
    break;
  default:
    break;
  }

  return 0;
}