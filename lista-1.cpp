#include <iostream>

int main(){
  std:: cout << "This is 1 question" << std :: endl;
  std :: cout << "* * * *" << "\n" << "* * * *" <<"\n" << "* * * *" << "\n" <<"* * * *" << "\n";

  std :: cout <<"This is 1-b" << std :: endl;
  std :: cout <<"*" <<"\n" << "* *" <<"\n" <<"* * *" <<"\n" <<"* * * *" << std:: endl;

  std :: cout <<"This is 1-c" << std :: endl;
  std :: cout <<"    *" << "\n" <<"  * * *" <<"\n" <<"* * * * *" << std :: endl;

  std :: cout <<"This is 1-d" << std :: endl;
  std :: cout <<"    *" << "\n" <<"  * * *" <<"\n" <<"* * * * *" <<"\n" <<"  * * *" <<"\n" <<"    *" << std :: endl;

  std :: cout <<"This is 1-e" << std :: endl;
  std :: cout <<"* * * *" << "\n" <<"*     *" <<"\n"<<"*     *" << "\n" <<"* * * *" << std :: endl;

  std :: cout <<"This is 2:" << std:: endl;
  std :: string name;
  std :: cout << "Enter you name: " << std :: endl;
  getline(std :: cin, name);
  std :: cout <<"Hello, " <<name << std :: endl;



  std :: cout <<"This is 3:" << std :: endl;
  std :: string name2;
  std :: cout << "Enter you name: " << std :: endl;
  getline(std :: cin,name2);
  int age;
  std :: cout << "Enter you age: ";
  std :: cin >> age;
  std :: string address;
  std :: cout << "Enter you address";
  getline(std :: cin >> std :: ws,address);
  std :: cout <<"Name: " <<name2 <<"\n" <<"Age: "<<age<<"\n" <<"Address: "<<address;


  return 0;
}