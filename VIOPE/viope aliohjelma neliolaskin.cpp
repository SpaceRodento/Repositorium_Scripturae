//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
    using namespace std;
//======================

//aliohjelma 
  void neliolaskin(float luku1){
   float tuloste = luku1*luku1;
    cout << "Luvun nelio on: "<< tuloste << endl; 
  }

int main() {
//alustus
  float luku1;
//  float tuloste;


/*Anna luku, jonka nelio lasketaan: 9
Luvun nelio on: 81*/

  cout << "Anna luku, jonka nelio lasketaan: ";
  cin >> luku1;
  neliolaskin(luku1);
return 0;

}
