#include <iostream>

int main(){
  for(int i = 1; i <= 3; i++){
    for(int j = 1; j <= 10; j++){
    std :: cout << j << ' ';
    }
    std :: cout << std :: endl;
  }
  
  int rows;
  int columns;
  char symbol;

  std :: cout << "How many rows?: ";
  std :: cin >> rows;

  std :: cout << "How many columns?: ";
  std :: cin >> columns;

  std :: cout << "Enter a symbol to use: ";
  std :: cin >> symbol;

   for(int i = 1; i <= rows; i++){
    for(int j = 1; j <= columns; j++){
    std :: cout << symbol << ' ';
    }
    std :: cout << std :: endl;
  }
  



  return 0;
}