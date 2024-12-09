#include <iostream>
using namespace std;
int main(void){
  float moneyofHours;
  cout <<"Enter how much do you earn per hour: " << endl;
  cin >> moneyofHours;
  float hours;
  cout <<"Enter hours of moth: " << endl;
  cin >> hours;
  float wage = moneyofHours * hours;
  cout <<"You have : "<<wage << endl;


}