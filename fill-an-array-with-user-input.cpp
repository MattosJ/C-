#include <iostream>

int main(){

  std :: string foods[5];
  int size = sizeof(foods)/sizeof(foods[0]);
  std :: string temp;

  for(int i = 0; i < size; i++){
    std :: cout << "Enter a foode you like or 'q' to quit #" << i + 1 << std :: endl;
    std :: getline(std :: cin, temp);
    if(temp == "q"){
      break;
    }
    else{
      foods[i] = temp;
    }
  }
  
  std :: cout << "You like the following food:\n";

  for(int i = 0; !foods[i].empty(); i++){
    std :: cout << foods[i] << std :: endl;
  }

  return 0;
}