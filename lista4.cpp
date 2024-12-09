#include <iostream>

int main(){
  
  for(int i = 100 ; i >= 0; i--){
    std :: cout << i << std :: endl;
  }
  std :: cout <<"End!" << std :: endl;

  for(int o = 0; o <= 100000; o+=1000){
    std :: cout << o << std :: endl;
  }


  for(int j = 1; j <= 3 * 20; j += 1){
      if( j % 3 == 0){
        std :: cout << j << std :: endl;
      }
      
  }
  float sum = 0;
  int i = 0;
  for(int i = 0; i<10; i++){
    float aux;
    std :: cout <<"Enter number: ";
    std :: cin >> aux;
    sum += aux;
  }
  std :: cout << sum << std :: endl;


  i = 0;

  int sml = 999999999;
  int big = -99999999;
  for(int i = 0; i<10; i++){
    float aux;
    std :: cout <<"Enter number: ";
    std :: cin >> aux;
    if(aux < sml){
      sml = aux;
    }
    if(aux > big){
      big = aux;
    }
  }
  std :: cout << big << std :: endl;
  std :: cout << sml << std :: endl;

  int iterate;
  std :: cout <<"Enter number of iterate: " << std :: endl;
  std :: cin >> iterate;
  for(int k = 0; k <= iterate ; k++){
    std :: cout << k << std :: endl;
  }

  return 0;
}