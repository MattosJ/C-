#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// pseudo-random = NOT truly random (but close).
int main(){
  unsigned seed = time(0);

  srand(seed);

  cout << rand()<<endl;
  cout << rand()%2 << endl;
  cout << 1+rand()%10 << endl;

  return 0;
}