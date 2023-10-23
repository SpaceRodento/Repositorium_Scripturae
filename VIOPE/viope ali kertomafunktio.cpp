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
Luvun 11 kertoma on 39916800
*/

  long long alioo(long luku1){
//    int luku2;
    long long k = 1;
    long n = 1;

    if (luku1 <= 1){
      cout << "virhe, nolla";
     return 1;
    }
      else
      {
/*        for (n; n > 0; n--)
        {
          k = n * k;*/

//        cout << "kerrotaan " << k << endl;
        for (n; n <= luku1; n++)
        {
          k = n * k;
//          cout << "n =  " << n << "| k =  " << k << endl;
        }
        
        }
      return (k);
    }
    

// ========== Pääohjelma
int main() {
//alustus
  long luku1 = 0;
  long long tuloste = 0;

  cout << "Anna kokonaisluku välille 0 - 16" << endl;
  cin >> luku1;

  tuloste = alioo(luku1);  // Kutsutaan aliooo
  cout << "Luvun " << luku1 << " kertoma on " << tuloste;

return 0;

}
