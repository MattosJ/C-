#include <iostream>

int main(void){
  int plunder;
  std :: cout <<"Enter value plunder: " << std :: endl;
  std :: cin >> plunder;

  const int min = 10;
  const int max = 600;
  const int bankNote1 =  1;
  const int bankNote5 = 5;
  const int bankNote10 = 10;
  const int bankNote50 = 50;
  const int bankNote100 = 100;

  int notes100 = plunder / bankNote100;
  int rest = plunder % bankNote100;
  int notes50 = rest / bankNote50;
  rest = rest % bankNote50;
  int notes10 = rest / bankNote10;
  rest = rest % bankNote10;
  int notes5 = rest / bankNote5;
  rest = rest % bankNote5;
  int notes = rest / bankNote1;

  if(plunder < 0 || plunder > 600){
    std :: cout <<"Over plunder" << std :: endl;
  }
  else{
    std :: cout <<"Bank Notes of 100: " << notes100 << std :: endl;
    std :: cout << "Bank Notes of 50: " << notes50 << std :: endl;
    std :: cout << "Bank Notes of 10: " << notes10 << std :: endl;
    std :: cout << "Bank Notes of 5: " << notes5 << std ::endl;
    std :: cout <<"Bank Notes of 1: " << notes << std :: endl;
  }


}