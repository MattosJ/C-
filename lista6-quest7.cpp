//7- Escreva uma função que recebe dois números inteiros positivos como parâmetro e retorna a  soma dos números inteiros existentes entre eles.
#include <iostream>
int sum(int lowLimit, int upperLimit);
int main(){
  int lowLimit;
  std :: cout <<"Enter Low Limit: " << std :: endl;
  std :: cin >> lowLimit;
  int upperLimit;
  std :: cout <<"Enter upper Limit: " << std :: endl;
  std :: cin >> upperLimit;
  std :: cout << sum(lowLimit,upperLimit) << std :: endl; 

  return 0;
}
int sum(int lowLimit, int upperLimit){
  int sum = 0;
  if(lowLimit < 0 || upperLimit < 0){
    return 0;
  }
  else if(lowLimit > upperLimit){
    return 0;
  }
  else{
    for(int i = lowLimit + 1; i < upperLimit; i++){
      sum += i;
  }
  }
 
  return sum;
}