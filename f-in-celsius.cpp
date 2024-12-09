#include <iostream>
using namespace std;
int main(void){
  float farenheit;
  cout <<"Enter farenheit :" << endl;
  cin >> farenheit;
  float celsius = (5 *(farenheit - 32)/9);
  cout << celsius << endl;
}