#include <iostream>
#include <ctype.h>
int main(void){
  char letter;
  std :: cout <<"Enter letter: " << std ::endl;
  std :: cin >> letter;
  char letterUp = toupper(letter);
  if(letterUp == 'A' || letterUp == 'E' || letterUp == 'I' || letterUp == 'O' || letterUp == 'U'){
    std :: cout <<"Is vogal" << std :: endl;
  }
  else{
    std :: cout <<"Is consonant" << std :: endl;
  }


}