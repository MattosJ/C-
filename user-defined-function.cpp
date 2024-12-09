#include <iostream>
//function = a block of reusable code.

void happyBirthday(std:: string name, int nummber){
  std :: cout <<"Happy Birthday to "<<nummber <<" years, "<< name << '\n';
  std :: cout <<"Happy Birthday to " <<nummber <<" years, "<< name << '\n';
  std :: cout <<"Happy Birthday to "<<nummber <<" years, "<< name << '\n';
}

int main(){
  std :: string name = "James";
  int age = 21;

  happyBirthday(name,age);

}