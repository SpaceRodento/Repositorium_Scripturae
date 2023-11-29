//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
    using namespace std;
//======================
/*Aliohjelman viittausparametrit. Selvitä, mikä ero on aliohjelman viittausparametreilla tavallisiin 
parametreihin verrattuna. Tee aliohjelma asetaIka, joka kysyy käyttäjän ikää ja kirjoittaa sen
 viitteenä saamaansa muuttujaan.
 Testaa aliohjelman toimintaa.

Example output:
kerro ikasi: 23
ikasi on: 23*/

//aliohjelma 
  void ikasi(int luku){ //aliohjelma poimii syötetyn luvun
    cout << "ikasi on: "<< luku << endl; 
  }

int main() {
  float input_luku;

  cout << "kerro ikasi: ";
  cin >> input_luku;
  ikasi(input_luku); //syötetään aliohjelmalle luku
return 0;

}
