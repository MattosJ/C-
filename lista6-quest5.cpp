#include <iostream>
int convertInSecods(int hours,int minutes, int seconds);
int main(){
  int hours; int minutes; int seconds;
  std :: cout << "Enter hours: " << std :: endl;
  std :: cin >> hours;
  std :: cout << "Enter minutes: " << std :: endl;
  std :: cin >> minutes;
  std :: cout << "Enter seconds: " << std :: endl;
  std :: cin >> seconds;
  std:: cout << convertInSecods(hours,minutes,seconds) << std :: endl;

  return 0;
}

int  convertInSecods(int hours,int minutes, int seconds){
  hours = hours * 60 ;
  hours = hours * 60;
  minutes = minutes * 60;
  int value = hours + minutes + seconds;
  return value;

}