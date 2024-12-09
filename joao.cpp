#include <iostream>
using namespace std;
int main(void){
  int fishs = 0;
  int fishsTax = 0;
  float valueTax = 0;
  float fishsKg = 0;
  float fishsKgTax = 0;
  char checked = 'N';
  while (checked !='x')
  {
    cout <<"Enter kg of fisher: " << endl;
    cin >> fishsKg;
    if(fishsKg > 50){
      fishsKgTax += fishsKg - 50;
      fishsTax ++;
    }
    else{
      fishs++;
    }
    checked = ' ';
    cout <<"for break Enter (x): " << endl;
    cin >> checked;
  }
  valueTax = fishsKgTax * 4;
  cout <<"You have: " <<fishs + fishsTax <<" Fishs" << endl;
  cout <<"You have: " << fishsTax << " Fishs with tax" << endl;
  cout <<"For Pay: " << valueTax << endl;

}