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

  string alioo(long luku1){
    long i = 0;
    long k = 1;
    long l = 1;
    long n = 1;
    long m = 0;
    string ajankohta;

       if (luku1 < 0 || luku1 >= 24)
       {
        ajankohta = "Ei ole kellonaika.";
        return ajankohta;
       }
        else if (luku1 >=6 && luku1 <= 11)
        {
          ajankohta = "aamu";
        }
        else if (luku1 >=12 && luku1 <= 16)
        {
          ajankohta = "päivä";
        }
        else if (luku1 >=17 && luku1 <= 22)
        {
          ajankohta = "ilta";
        }
        else if (luku1 == 23 || luku1 <= 05)
        {
          ajankohta = "yö";
        }
        
      return ajankohta;
      }

// Aliohjelma loppu
//======================


// ========== PÄÄOHJELMA ====================
int main() {
  long luku1 = 0;
  string tuloste;
//  string tuloste = 0;

  cout << "Anna kellonaika tunneissa (0-23): " ;
  cin >> luku1;
//  cout << endl;

  tuloste = alioo(luku1);  // Kutsutaan aliooo
  cout << "Hetki päivästä on "<< tuloste;      // tulostetaan tulos

return 0;

}
