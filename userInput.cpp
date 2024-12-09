#include <iostream>
// cout << (insertion operator)
// cin >> (extraction Operator)


int main(){
  std :: string name;
  int age;
  std :: cout << "Whats your age?";
  std :: cin >> age;


  std :: cout << "Whats your full name?: ";
  std :: getline(std :: cin  >> std :: ws, name);
  //if you use getline not use cin
 
  

  std :: cout << "Hello " << name << std:: endl;
  std :: cout << age << " I am too";

  return 0;
}