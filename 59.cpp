#include <iostream>

int main(void){
  int odd = 0;
  int even = 0;
  for(int i = 0; i < 10;i ++){
    int aux;
    std :: cout <<"Enter number "<<i+1<<" :" << std :: endl;
    std :: cin >> aux;
    if(aux % 2 == 0){
      even ++;
    }
    else{
      odd ++;
    }
  }
  std :: cout <<"Have: " << odd <<" odds" << std :: endl;
  std :: cout <<"Have: " << even <<" evens" << std :: endl;
}