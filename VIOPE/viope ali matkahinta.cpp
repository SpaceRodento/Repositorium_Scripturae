//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
    using namespace std;
//======================

//aliohjelma 
  float suorakaide(float luku1, float luku2, float luku3){
    return ((luku1/100) * luku2 * luku3);
    }

/*
Anna autolla ajettava matka kilometrina: 250
Anna auton polttoaineen kulutus sadalla kilometrilla: 6.8
Anna polttoaineen hinta: 1.8
Autolla ajettavan matkan polttoainekulut ovat: 30.6 euroa.*/

int main() {
//alustus
  float luku1;
  float luku2;
  float luku3;

  cout << "Anna autolla ajettava matka kilometrina: ";
  cin >> luku1;
  cout << "Anna auton polttoaineen kulutus sadalla kilometrilla: ";
  cin >> luku2;
  cout << "Anna polttoaineen hinta: ";
  cin >> luku3;

  cout << "Autolla ajettavan matkan polttoainekulut ovat: ";
  float tuloste = suorakaide(luku1, luku2, luku3);  // Kutsutaan aliooo
  cout << tuloste << " euroa."<< endl;

return 0;

}
