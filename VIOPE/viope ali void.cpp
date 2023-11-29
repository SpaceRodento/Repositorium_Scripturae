//Kirjastot
#include <iostream>
#include <string>
//#include <cmath>
    using namespace std;
//======================

//====================== ALIOHJELMA  ======================
/* Tee ohjelma, jossa on haluttua merkkiä halutun määrän ruudulle tulostava void()-tyyppinen aliohjelma.
Void()-aliohjelmassa ei ole lainkaan return-komentoa, mutta se käyttää parametreja ja tekee toimintoja kuten muunkin tyyppiset aliohjelmat.
Tässä aliohjelmassa on kaksi parametria: tulostettava merkki ja lukumäärä, kuinka monta tällaista merkkiä tulostetaan.
Merkin ja lukumäärän ohjelma pyytää käyttäjältä. 

Example output:
Montako merkkiä haluat?    25
Mikä merkki tulostetaan?    *

*************************
*/

  void alioo(){
    char merkki = '@';
    int luku = 0;

    cout << "Montako merkkiä haluat?    ";
    cin >> luku;
    cout << "Mikä merkki tulostetaan?    ";
    cin >> merkki;
    cout << endl;

    for (int i = 0; i < luku; i++)
    {
      cout << merkki;
    }
    

  }




// Aliohjelma loppu
//======================


// ========== PÄÄOHJELMA ====================
int main() {
  
  alioo();  // Kutsutaan aliohjelma

return 0;

}

