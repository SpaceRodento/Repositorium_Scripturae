//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
    using namespace std;
//======================
/* 
Structit eli tietueet - perusharjoitus - 1p. Kirjoita struct "Opiskelija", joka koostuu etunimestä (string), 
sukunimestä (string), opiskelijanumerosta (string) ja opintopisteistä (int). Luo päohjelmassa opiskelija ja 
kysy käyttäjältä arvot opiskelijan tietoihin. Tulosta lopulta opiskelijan tiedot tyyliin:

Etunimi: Pekka
Sukunimi: Viljanen
Opiskelijanumero: 345443
Suoritetut opintopisteet: 35

Example output:
Anna opiskelijan etunimi: Pekka
Anna opiskelijan sukunimi: Viljanen
Anna opiskelijan opiskelijanumero: 345443
Anna opiskelijan opintopisteet: 35

Etunimi: Pekka
Sukunimi: Viljanen
Opiskelijanumero: 345443
Opintopisteet: 35
*/


// ========== PÄÄOHJELMA ====================
int main() {

struct IHMINEN{ // Structin nimi on IHMINEN
  string etunimi;
  string sukunimi;
  string opiskelijanro;
  int opisteet;
  } OPISKELIJA, OPETTAJA, SPURGU; // Structin variablet

// Kysytään taktiset tiedot
  cout << "Anna opiskelijan etunimi: ";
  cin >> OPISKELIJA.etunimi;
  cout << "Anna opiskelijan sukunimi: ";
  cin >> OPISKELIJA.sukunimi;
  cout << "Anna opiskelijan opiskelijanumero: ";
  cin >> OPISKELIJA.opiskelijanro;
  cout << "Anna opiskelijan opintopisteet: ";
  cin >> OPISKELIJA.opisteet;

// Tulostetaan
  cout << "Etunimi: " << OPISKELIJA.etunimi << endl;
  cout << "Sukunimi: " << OPISKELIJA.sukunimi << endl;
  cout << "Opiskelijanumero: " << OPISKELIJA.opiskelijanro<< endl;
  cout << "Opintopisteet: " << OPISKELIJA.opisteet;


}

