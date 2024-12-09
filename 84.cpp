#include <iostream>
#include <string>

void menu(){
  std :: cout <<"********** MENU **********" << std :: endl;
  std :: cout <<"100 - HotDog $ 1.20" << std :: endl;
  std :: cout <<"101 - Bauru symple $ 1.30" << std :: endl;
  std :: cout <<"102 - Bauru with eggs $ 1.50" << std :: endl;
  std :: cout <<"103 - Hamburger $ 1.20" << std :: endl;
  std :: cout <<"104 - Chesseburger $ 1.30" << std :: endl;
  std :: cout <<"105 - Soda $ 1.00" << std :: endl;
}

void prices(std :: string name,float a,float b, float c, float d,float e, float f, int g, int h, int i, int j, int k, int l){
  std :: cout <<"The command of: " << name << std :: endl;
  std :: cout <<"The value of HotDog: $"<< a <<" - "<< g << std :: endl;
  std :: cout <<"The value of Bauru: $"<< b <<" - "<< h << std :: endl;
  std :: cout <<"The value of  Bauru with eggs: $" << c <<" - "<< i << std :: endl;
  std :: cout <<"The value of Hamburger: $"<< d <<" - "<< j << std :: endl;
  std :: cout <<"The value of Chesseburger: $"<< e <<" - "<< k << std :: endl;
  std :: cout <<"The value of Soda: $"<< f <<" - "<< l  << std :: endl;
  std :: cout <<"*****************************************" << std :: endl;
  std :: cout <<"Full Price: $ "<<a + b + c + d + e + f << std :: endl;
}

int main(void){

//Calcule e mostre o valor a ser pago por item (preço * quantidade) e o total geral do pedido.

//Considere que o cliente deve informar quando o pedido deve ser encerrado.

  int hotDog = 0; int bauruS = 0; int bauruEggs = 0; int hamburger = 0; int chesseburger = 0; int soda = 0;
  
  std :: string nameClient;
  std :: cout <<"Enter you name: " << std :: endl;
  getline(std :: cin,nameClient);
  char end = 'N';
  int cod = 0;
  while(toupper(end) != 'S'){
    int amount = 0;
    menu();
    std :: cin >> cod;
    std :: cout <<"Enter amount: " << std :: endl;
    std :: cin >> amount;
    if(cod == 100){
      hotDog += amount;
    }
    else if(cod == 101){
      bauruS += amount;
    }
    else if(cod == 102){
      bauruEggs += amount;
    }
    else if(cod == 103){
      hamburger += amount;
    }
    else if(cod == 104){
      chesseburger += amount;
    }
    else if(cod == 105){
      soda += amount;
    }

    std :: cout <<"Do you want complet the order (s for finish): " << std :: endl;
    std :: cin >> end ;
  }

  float priceOfHotDog = hotDog * 1.20; float priceOfBauruS = bauruS * 1.30; float priceOfBauruEgss = bauruEggs * 1.50; float priceOfHamburger = hamburger * 1.20;
  float priceOfChesseburger = chesseburger * 1.30; float priceOfSoda = soda * 1.00;

  prices(nameClient,priceOfHotDog,priceOfBauruS,priceOfBauruEgss,priceOfHamburger,priceOfChesseburger,priceOfSoda,hotDog,bauruS,bauruEggs,hamburger,chesseburger,soda);

}