//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
    using namespace std;
//======================

//====================== ALIOHJELMA  ======================
/* 

Taulukot. Tee 12 –alkioinen kokonaislukutaulukko sademaara[12], johon kysyt käyttäjältä vuoden kaikkien kuukausien sademäärät.
 Käyttäjän syöte talletetaan taulukkoon, kunkin kuukauden sademäärä omaan lokeroonsa.
  Lopuksi käyt taulukon läpi tulostamalla histogrammin (yhtä monta tähteä ruudulle kuin mikä on taulukossa olevan
   luvun arvo), joka kuvaa kuukausittaista sademäärää. 
   Kysy sademäärät pääohjelmassa ja toteuta tähtien tulostusosuus aliohjelmalla (jota kutsut sitten joka kuukaudelle). 
   Aliohjelman prototyyppi voisi olla vaikka seuraava:

void tulostaTahtia( int lukumaara );

Syota kuukausi 12 sademaara: 7
*******

*/

  void tahtituloste(int sademaara){
    int i = 0;

    for (i = 0; i < sademaara; i++)
    {
      cout << "*";
    }    

  }




// Aliohjelma loppu
//======================


// ========== PÄÄOHJELMA ====================
int main() {
 // int sademaara = 0;
  int arr_sademaara[12];
  int i = 0;
  int kuukausi =0;

for ( i = 0; i < 12; i++)
{
  cout << "Syota kuukausi " << i+1 << " sademaara: ";
  cin >> arr_sademaara[i];
  cout << endl;
//  arr_sademaara[i]= sademaara; 
}

for (i = 0; i < 12; i++)
{
    tahtituloste(arr_sademaara[i]);
cout << endl;

}

return 0;

}

