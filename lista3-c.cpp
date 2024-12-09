#include <iostream>

int main(){

  int number;
  std :: cout <<"Enter number : " << std:: endl;
  std :: cin >> number;
  if(((number % 5) == 0) && ((number % 3) == 0)){
    std :: cout <<"Is divisible for 3 and 5" << std :: endl;
  }
  else if(number % 3 == 0){
    std :: cout <<"The number is divisble for 3: " << std :: endl;
  }
  else if(number % 5 == 0){
    std :: cout <<"The number is divisible for 5: " << std :: endl;
  }
  else{
    std :: cout <<"The number not divisble: " << std :: endl;
  }


  float a; float b; float c;

  std :: cout <<"Enter number side A: " << std:: endl;
  std :: cin >> a;

  std :: cout <<"Enter number side B : " << std:: endl;
  std :: cin >> b;

  std :: cout <<"Enter number side C : " << std:: endl;
  std :: cin >> c;
  
  if((a > (b+c)) || (b >(a + c)) || (c > (b+a))){
    std :: cout <<"The sides invalid! " << std :: endl;
  }
  else if( (a == b) && (b == c)){
    std :: cout <<"Equilatero" << std :: endl;
  }
  else if(a == b || b == c || a == c){
    std :: cout <<"Isosceles" << std :: endl;
  }
  else{
    std :: cout <<"Escaleno" << std :: endl;
  }


  if(a > b && b > c){
    std :: cout << a << b << c << std :: endl;
  }
  else if(a > c && c > b){
    std :: cout << a << c << b << std :: endl;
  }
  else if(b > a && a > c ){
    std :: cout << b << a << c << std :: endl;
  }
  else if(b > c && c > a){
    std :: cout << b << c << a << std :: endl;
  }
  else if(c > a && a > b){
    std :: cout << c << a << b  << std :: endl;
  }
  else if(c > b && b > a){
    std :: cout << c << b << a << std :: endl;
  }
  else{
    std :: cout <<"Number equals" << std :: endl;
  }
  return 0;
}