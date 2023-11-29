//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
    using namespace std;
//======================
/* 
Struct funktion parametrina. Tee aliohjelma "tulostaOpiskelijanTiedot" jonka parametrina on tehtävän 1 opiskelija. 
Tulosta opiskelijan tiedot funktiossa. Funktion prototyyppi olisi esim. seuraavanlainen:

void tulostaOpiskelijanTiedot( Opiskelija o );

Example output:
Anna opiskelijan etunimi: Lissu
Anna opiskelijan sukunimi: Lahti
Anna opiskelijan opiskelijanumero: 12345
Anna opiskelijan opintopisteet: 100

Etunimi: Lissu
Sukunimi: Lahti
Opiskelijanumero: 12345
Opintopisteet: 100
*/

// Struct
struct IHMINEN{ // Structin nimi on IHMINEN
  string etunimi;
  string sukunimi;
  string opiskelijanro;
  int opisteet;
  } OPISKELIJA, OPETTAJA, SPURGU; // Structin variablet

//Aliohjelma:  tulostaOpiskelijanTiedot

void tulostaOpiskelijanTiedot(IHMINEN){

// Tulostetaan
  cout << "Etunimi: " << OPISKELIJA.etunimi << endl;
  cout << "Sukunimi: " << OPISKELIJA.sukunimi << endl;
  cout << "Opiskelijanumero: " << OPISKELIJA.opiskelijanro<< endl;
  cout << "Opintopisteet: " << OPISKELIJA.opisteet;
  
}


// ========== PÄÄOHJELMA ====================
int main() {

// Kysytään taktiset tiedot
  cout << "Anna opiskelijan etunimi: ";
  cin >> OPISKELIJA.etunimi;
  cout << "Anna opiskelijan sukunimi: ";
  cin >> OPISKELIJA.sukunimi;
  cout << "Anna opiskelijan opiskelijanumero: ";
  cin >> OPISKELIJA.opiskelijanro;
  cout << "Anna opiskelijan opintopisteet: ";
  cin >> OPISKELIJA.opisteet;

tulostaOpiskelijanTiedot(OPISKELIJA);


}

