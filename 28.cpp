#include <iostream>
//Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno.
int main(void){
  char shift;
  std :: cout <<"Enter M-Morning "<< std :: endl;
  std :: cout <<"Enter A - Afternoon " << std :: endl;
  std :: cout <<"Enter E - Evening " << std :: endl;
  std :: cin >> shift;
  if(shift == 'M' || shift == 'm'){
    std :: cout <<"Good morning! " << std :: endl;
  }
  else if(shift == 'A' || shift == 'a'){
    std :: cout <<"Good Afternoon! " << std :: endl;
  }
  else if(shift == 'E' || shift == 'e'){
    std :: cout <<"Good Evening! " << std :: endl;
  }
  else{
    std :: cout <<"Invalid! " << std :: endl;
  }

}
