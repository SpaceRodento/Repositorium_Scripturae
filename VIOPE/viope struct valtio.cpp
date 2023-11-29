//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
    using namespace std;
//======================
/* 
Kirjoita struct "Valtio". Valtiolla on nimi (esim Suomi), asukasluku, pinta-ala sekä johtaja. 
Kirjoita ohjelma, jossa luot kaksi valtiota. 
Kysyt käyttäjältä valtioiden tiedot ja lopulta tulostat tiedot näytölle.

Example output:
Anna valtion 1 nimi: Suomi
Anna valtion 1 asukasluku: 5500000
Anna valtion 1 pinta-ala: 350000
Anna valtion 1 johtaja: Sauli

Anna valtion 2 nimi: Ruotsi
Anna valtion 2 asukasluku: 7000000
Anna valtion 2 pinta-ala: 400000
Anna valtion 2 johtaja: Kustaa

Valtio numero 1
Nimi: Suomi
Asukasluku: 5500000
Pinta-ala: 350000
Johtaja: Sauli


Valtio numero 2
Nimi: Ruotsi
Asukasluku: 7000000
Pinta-ala: 400000
Johtaja: Kustaa

  cout << "Valtion " << valtio1.nimi << " tiedot:\n";
*/

struct VALTIO {
// nimi (esim Suomi), asukasluku, pinta-ala sekä johtaja
  int valtion_numero;
  string nimi;
  long asukasluku;
  long pintaala;
  string johtaja;
  }eka, toka;


// ========== PÄÄOHJELMA ====================
int main() {
  int i = 0;

  i++;
  VALTIO eka;  // 1 tai 2
  eka.valtion_numero = i;
  cout << "Anna valtion " <<i<<" nimi: ";
  cin >> eka.nimi;
  cout << "Anna valtion " <<i<<" asukasluku: ";
  cin >> eka.asukasluku;
  cout << "Anna valtion " <<i<<" pinta-ala: ";
  cin >> eka.pintaala;
  cout << "Anna valtion " <<i<<" johtaja: ";
  cin >> eka.johtaja;

  i++;
  VALTIO toka;  // 1 tai 2
  toka.valtion_numero = i;
  cout << "Anna valtion " <<i<<" nimi: ";
  cin >> toka.nimi;
  cout << "Anna valtion " <<i<<" asukasluku: ";
  cin >> toka.asukasluku;
  cout << "Anna valtion " <<i<<" pinta-ala: ";
  cin >> toka.pintaala;
  cout << "Anna valtion " <<i<<" johtaja: ";
  cin >> toka.johtaja;


  cout << "Valtio numero " << eka.valtion_numero<< endl;
  cout << "Nimi: " << eka.nimi<<endl;
  cout << "Asukasluku: " << eka.asukasluku <<endl;
  cout << "Pinta-ala: " << eka.pintaala<< endl;
  cout << "Johtaja: " << eka.johtaja<< endl;
  
  cout << "Valtio numero " << toka.valtion_numero<< endl;
  cout << "Nimi: " <<         toka.nimi<<endl;
  cout << "Asukasluku: " <<   toka.asukasluku <<endl;
  cout << "Pinta-ala: " <<    toka.pintaala<< endl;
  cout << "Johtaja: " <<      toka.johtaja<< endl;
   
// Funktio jolla epäsuorasti kutsuis structin sisältöä?
/*
  for (i = 1; i <= 2; i++)
  {
    cout << "Valtio numero " << 
        
  }
  
cout << "Valtio numero " << 
Nimi: Suomi
Asukasluku: 5500000
Pinta-ala: 350000
Johtaja: Sauli
*/
}

