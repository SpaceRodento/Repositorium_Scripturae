//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
    using namespace std;
//======================

//aliohjelma 
/* Tee kertoman laskeva ohjelma aliohjelmalla, jossa ei ole rekursiota.

Kertomafunktio k(n) määritellään seuraavasti:
Jos n < 0, niin virhetilanne,
k(0) = 1 ja
k(n) = n * k(n-1).

Example output:
Anna kokonaisluku välille 0 - 16
11
Luvun 11 kertoma on 39916800*/

  float alioo(int luku1){
    int luku2;
    int k;
    k = luku1;
    int n;

    if (luku1 < 0){
     return 1;
    }
    else
    {
     luku2 = n * k(n-1) ;
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
