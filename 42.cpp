#include <iostream>
int main(void){
  int ans = 0;
  char quest1;
  std :: cout <<"call for the victim: " << std :: endl;
  std :: cin >> quest1;
  char quest2;
  std :: cout <<"were you at the scene of the crime: " << std :: endl;
  std :: cin >> quest2;
  char quest3;
  std :: cout <<"Lives close to the victim: " << std :: endl;
  std :: cin >> quest3;
  char quest4;
  std :: cout <<"Should it go to the victim: " << std :: endl;
  std :: cin >> quest4;
  char quest5;
  std :: cout <<"Have you worked with the victim: " << std :: endl;
  std :: cin >> quest5;  
  if(quest1 == 's' || quest1 == 'S'){
    ans ++;
  }
  if(quest2 == 's' || quest2 == 'S'){
    ans ++;
  }
  if(quest3 == 's' || quest3 == 'S'){
    ans ++;
  }
  if(quest4 == 's' || quest4 == 'S'){
    ans ++;
  }
  if(quest5 == 's' || quest5 == 'S'){
    ans ++;
  }
  if(ans == 2){
    std :: cout <<"suspicion" << std :: endl;
  }
  else if(ans > 2 && ans < 5){
    std :: cout <<"accomplice" << std :: endl;
  }
  else if(ans == 5){
    std :: cout <<"guilty" << std :: endl;
  }
  else{
    std :: cout <<"innocent" << std :: endl;
  }
}