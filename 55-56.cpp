#include <iostream>

int main(void){
  int inferior;
  int upper;
  int sum = 0;
  std :: cout <<"Enter inferior limit:  " << std :: endl;
  std :: cin >> inferior;
  std :: cout <<"Enter Upper Limit: " << std :: endl;
  std :: cin >> upper;
  while (inferior > upper){
    std :: cout <<"Enter inferior limit:  " << std :: endl;
    std :: cin >> inferior;
    std :: cout <<"Enter Upper Limit: " << std :: endl;
    std :: cin >> upper;
  }
  
  for(int i = inferior; i <= upper; i++){
    std :: cout << i <<" ";
    sum += i;
  }
  std :: cout <<"  " << std :: endl;
  std :: cout <<"This is sum: " << sum << std :: endl;
}