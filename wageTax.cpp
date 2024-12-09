#include <iostream>
using namespace std;
int main(void){
  float moneyofHours;
  cout <<"Enter how much do you earn per hour: " << endl;
  cin >> moneyofHours;
  float hours;
  cout <<"Enter hours of moth: " << endl;
  cin >> hours;
  float wageBrutte = moneyofHours * hours;
  cout <<"You brutte wage : "<<wageBrutte << endl;
  float iR = wageBrutte * 0.11;
  float inss = wageBrutte * 0.08;
  float sindicate = wageBrutte * 0.05;
  float wageLiquid = wageBrutte - iR - inss - sindicate;
  cout <<"You liquid wage: " << wageLiquid << endl;
}