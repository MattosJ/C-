#include <iostream>

int main(){
  std :: string name;
  std :: cout << "Enter your name: ";
  std :: getline(std :: cin, name);

  if(name.length() > 12){
    std :: cout << "Your name can t be over 12 characteres" << std :: endl;
  }
  else{
    std :: cout << "Welcome " << name << std :: endl;
  }

  

  std :: string momName;
  std :: cout <<"Enter name your mom: ";
  std :: getline(std :: cin, momName);

  if(momName.empty()){
    std::cout << "You didn t enter name your mom" << std :: endl;
  }
  else{
    std :: cout << "Hello the name of your mom is " << momName << std :: endl;
  }

  std :: string name2;
  std :: cout <<"Enter name : ";
  std :: getline(std :: cin,name2);

  name2.clear();
  std :: cout << "Hello" << name2 << std :: endl;

  name2.append("Pedro");
  name2.append("@gmail.com");
  std :: cout << "you name now is: " << name2 << std :: endl;

  std :: cout << name.at(0) << std :: endl;
  name.insert(0,"@");
  std :: cout << name << std :: endl;

  std :: cout << name.find(" ") << std :: endl;
  
  name.erase(0, 3);
  std:: cout << name << std :: endl;

  return 0;
}