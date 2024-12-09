#include <iostream>
using namespace std;
int main(void){
  float heigth;
  cout <<"Enter heigh in (m): " << endl;
  cin >> heigth;
  float f = (72.7 * heigth) - 58;
  cout <<"Ideal Weight is : "<< f << endl;
}