#include <iostream>
using namespace std;

int main(){
  float sum = 0;
  float grades = 0;
  for(int i = 0;i <4;i++){
    float aux;
    cout <<"Enter grade: " << endl;
    cin >> aux;
    sum += aux;
    grades = i + 1;
  }
  cout << sum / grades << endl;
  return 0;
}