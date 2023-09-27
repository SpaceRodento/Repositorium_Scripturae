/*Anna luku: 3
Anna toinen luku: 5
Anna viela kolmas luku: 4
Toinen luku oli suurin! */

//Kirjastot
#include <iostream>
#include <string>
    using namespace std;
//======================

int main() {
    float luku1 = 0; // alustetaan luvut
    float luku2 = 0;
    float luku3 = 0;
    float luku4 = 0;
    string Tuloste;
    char Merkki;

  cout << "Valitse laskutoimitus (+ - * /): ";
  cin >> Merkki;
  cout << "Anna luku: ";
  cin >> luku1;
  cout << "Anna toinen luku: ";
  cin >> luku2;

switch (Merkki)
{
  case '+':
    luku4 = luku1 + luku2;
    break;
  case '-':
    luku4 = luku1 - luku2;
    break;
  case '*':
    luku4 = luku1 * luku2;
    break;
  case '/':
    luku4 = luku1 / luku2;
    break;

  default:
    break;
}

/*
  if (Merkki = '+'){
  luku4 = luku1 + luku2;}*/

  // Esitä
  {  cout << "Lukujen tulo on "<< luku4;  }

/*Valitse laskutoimitus (+ - * /): *
Anna luku: 12
Anna toinen luku: 6
Lukujen tulo on 72*/  

}
