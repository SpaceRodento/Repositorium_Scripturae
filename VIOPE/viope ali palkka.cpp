//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
    using namespace std;
//======================

//aliohjelma 
/* Perustuntipalkka on 10€/h b. Ylituntipalkka (yli 40h/vko meneviltä tunneilta) = 150 % = 15€/h*/
  float alioo(int luku1){
    int luku2;
    if (luku1 >= 40){
     luku2 =(40*10)+ (luku1-40)*15;
    }
    else
    {
      luku2 = luku1*10;
    }
    
    return (luku2);
    }

/*
Anna viikon tyotunnit: 55
Viikon palkkasi on: 625 euroa.*/

int main() {
//alustus
  float luku1;
  float luku2;
  float luku3;

  cout << "Anna viikon tyotunnit: ";
  cin >> luku1;
/*  cout << "Anna auton polttoaineen kulutus sadalla kilometrilla: ";
  cin >> luku2;
  cout << "Anna polttoaineen hinta: ";
  cin >> luku3;
*/
  cout << "Viikon palkkasi on: ";
  float tuloste = alioo(luku1);  // Kutsutaan aliooo
  cout << tuloste << " euroa."<< endl;

return 0;

}
