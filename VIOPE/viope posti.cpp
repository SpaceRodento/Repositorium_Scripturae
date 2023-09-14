//Kirjastot
#include <iostream>
#include <string>
    using namespace std;
//======================


int main() {
    float luku1 = 0; // alustetaan luvut
    float luku2 = 0;
    float luku3 = 0;
    float Hinta = 0;
//    string Tuloste;

  cout << "Anna kirjeen paino grammoina: ";
  cin >> luku1;

    // Manipuloi
  if (luku1 > 2000) {  
        Hinta = 5.5;  }
  if (luku1 <= 2000 && luku1 > 1000) {  
        Hinta = 3.5;  }
  if (luku1 >= 500 && luku1 < 1000) {  
        Hinta = 3.1;  }
  if (luku1 >= 250 && luku1 < 500) {  
        Hinta = 1.3;  }
  if (luku1 >= 100 && luku1 < 250) {  
        Hinta = 0.9;  }
  if (luku1 >= 50 && luku1 < 100) {  
        Hinta = 0.6;  }

/*Paino enintään      1. lk postimaksu
50g                        0,60€
100g                      0,90€
250g                      1,30€
500g                      2,10€
1000g                    3,50€
2000g                     5,50€

Example output:
Anna kirjeen paino grammoina: 758
Kirjeen lahetyksen hinta kotimaassa on 3.1 euroa*/

/*    // Luodaan tuloste
    if (Hinta == luku1) {
        Tuloste = "Ensimmainen";
    }
*/
cout << "Kirjeen lahetyksen hinta kotimaassa on " << Hinta << " euroa";  

}
