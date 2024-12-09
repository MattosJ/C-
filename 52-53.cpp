#include <iostream>

int main(void){
  float bigger = -99999;
  float sum = 0;
  for(int i = 0; i <= 4; i ++){
    float aux;
    std :: cout <<"Enter number: " << std :: endl;
    std :: cin >> aux;
    sum += aux;
    if(aux > bigger){
      bigger = aux;
    }
  }
  std :: cout<<"This is bigger: " << bigger << std :: endl;
  std :: cout <<"The sum is: " << sum << std :: endl;
  std :: cout <<"The average is: " << sum/ 5 << std :: endl;

}