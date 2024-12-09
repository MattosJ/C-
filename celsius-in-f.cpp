#include <iostream>
using namespace std;
int main(void){
  float celsius;
  cout <<"Enter temperature in Celsius" << endl;
  cin >> celsius;
  float f = (celsius * (float(9)/float(5))) + 32;
  cout << f << endl;
}