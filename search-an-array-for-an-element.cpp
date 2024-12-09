#include <iostream>
int searchArray(int array[], int size, int element);

int searchArrayString(std :: string array[],int size, std :: string element);
int main(){

 std :: string foods[] = {"Pizza","Hamburger","Hotdog"};
  int sizeFood = sizeof(foods)/sizeof(foods[0]);
  int indexFood;
  std :: string myFood;

  std :: cout << "Enter element to serach for: " << std :: endl;
  std :: getline(std :: cin, myFood);

  indexFood = searchArrayString(foods,sizeFood,myFood);

  if(indexFood != -1){
    std :: cout << myFood << " Is at index " << indexFood << std :: endl;
  }
  else{
    std :: cout << myFood <<" Is not in the array " << std :: endl;
  }




  int numbers[] = {1,2,3,4,5,6,7,8,9,10};
  int size = sizeof(numbers)/sizeof(numbers[0]);
  int index;
  int myNum;

  std :: cout <<"Enter Element to search for: ";
  std :: cin >> myNum;

  index = searchArray(numbers,size,myNum);

  if(index != -1){
    std :: cout << myNum << " Is at index " << index << std :: endl;
  }
  else{
    std :: cout << myNum <<" Is not in the array " << std :: endl;
  }


  return 0;
}
int searchArray(int array[], int size, int element){
  for(int i= 0; i < size; i++){
    if(array[i] == element){
      return i;
    }
    
  }
  return -1;
}
int searchArrayString(std :: string array[],int size, std :: string element){
  for(int i= 0; i < size; i++){
    if(array[i] == element){
      return i;
    }
    
  }
  return -1;
}