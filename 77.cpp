#include <iostream>

int main(void){
  int index;
  int limitInf;
  int limitSup;
  std :: cout <<"Enter the index of multiplication table: " << std :: endl;
  std :: cin >> index;
  std :: cout <<"Enter the limit Inf: " << std :: endl;
  std :: cin >> limitInf;
  std :: cout <<"Enter the limit sup: " << std :: endl;
  std :: cin >> limitSup;
  while(limitInf > limitSup){
    std :: cout <<"Enter the limit Inf: " << std :: endl;
    std :: cin >> limitInf;
    std :: cout <<"Enter the limit sup: " << std :: endl;
    std :: cin >> limitSup;
  }

  for(int i = limitInf; i <= limitSup; i++){
    std :: cout << index <<" X " <<i<<" = " << index * i << std :: endl;
  }
}