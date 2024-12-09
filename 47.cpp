#include <iostream> 

int main(void){
  std :: string user;
  std :: cout <<"Enter userName: " << std :: endl;
  getline(std :: cin,user);
  std :: string password;
  std :: cout <<"Enter password "  << std :: endl;
  getline(std :: cin,password);
  while(password == user){
    std :: cout <<"Password = Username is invalid!" << std :: endl;
    std :: cout <<"Enter password "  << std :: endl;
    getline(std :: cin,password);
  }

}