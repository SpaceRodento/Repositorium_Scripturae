//Kirjastot
#include <iostream>
#include <string>
    using namespace std;
//======================

int main() {
    float luku1 = 0; // alustetaan luvut
    float luku2 = 0;
    float luku3 = 0;
    float SuurinLuku = 0;
    string Tuloste;

  cout << "Anna luku: ";
  cin >> luku1;
  cout << "Anna toinen luku: ";
  cin >> luku2;
  cout << "Anna viela kolmas luku: ";
  cin >> luku3;
  
    // Manipuloi
  if (luku1 > luku2) {  
        SuurinLuku = luku1;  }
  if (luku2 > SuurinLuku) {  
        SuurinLuku = luku2;  }
  if (luku3 > SuurinLuku) {  
        SuurinLuku = luku3; }

    // Luodaan tuloste
    if (SuurinLuku == luku1) {
        Tuloste = "Ensimmainen";
    }
    if (SuurinLuku == luku2) {
        Tuloste = "Toinen";
    }
    if (SuurinLuku == luku3) {
        Tuloste = "Kolmas";
    }

cout << Tuloste << " luku oli suurin! ";  

}
