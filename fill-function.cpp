#include <iostream>
// fill() = Fills a range of elements with a specified value.
//          fill(begin,end,value)
int main(){
  const int SIZE = 99;
  std :: string foods[SIZE];
  
  fill(foods,foods + (SIZE/3),"Pizza");
  fill(foods + (SIZE/3), foods + (SIZE/3)*2, "Hamburger");
  fill(foods + (SIZE/3)*2, foods + SIZE,"Hotdog");

  for(std :: string food : foods){
    std :: cout << food << std :: endl;
  }
  return 0;
}