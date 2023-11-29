//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
  using namespace std;
//======================
/* 
Tee ohjelma, joka muuttaa roomalaiset numerot kymmenjärjestelmän luvuiksi. 
Muunnos voidaan ajatella tehtäväksi aliohjelmassa, jonne viedään parametrinä luvun string tyyppinen muuttuja.
Paluuarvona saatu luku voidaan tulostaa pääohjelmassa.
Example output:
Roomalainen luku, jonka desimaaliarvon haluat tietää? MCMXCVI
Desimaalimuodossa roomalainen luku MCMXCVI on 1996

Roomalainen numero
I 1
V 5
X 10
L 50
C 100
D 500
M 1000​
*/

// Struct
struct structRoomalaisNumero{ // Strukti johon syötetään yksittäinen merkki
  char merkki;
  int arvo;
}; 

//======== Aliohjelma: Muunna roomalaisia numeroita arabiaksi
long LaskeRoomalaiset(const string& Roomalainen){
    // otetaan stringinä vastaan asioita ja väännetään niistä numeroita
  vector<structRoomalaisNumero> roomalaisNumeroTaulu = { // luodaan muunnostaulu kirjaimista numeroihin
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000},
  };
    long Arabialainen = 0;

// Luodaan vektori käännetyistä numeroista
vector<int> vecArabialaisLuvut;
//Käydään läpi forrilla roomalaiset ja käännetään niitä yksittäin
for (char c : Roomalainen){
  for (structRoomalaisNumero& pari : roomalaisNumeroTaulu){ //määritellään arabian pari roomalaisnumerolle
    if (pari.merkki == c){
      Arabialainen = pari.arvo;
      vecArabialaisLuvut.push_back(Arabialainen); //pusketaan vektorin perälle löydetty numero
    }
  }
}
for (int luku : vecArabialaisLuvut){
  cout << luku << " ";
}

/*
// forri läpikäyntiin
for (char c : Roomalainen ) // Range based for loop. (Eli tämän: 0; i < count; i++) i:n sijaan käydäänkin kirjaimet läpi)
{
  // käydään vektori läpi ja todetaan koska merkki vastaa taulun tietoa ja sylkästään se pihalle, sit palataan edelliseen forriin
  for (structRoomalaisNumero& pari : roomalaisNumeroTaulu){ // luodaan structRoomalaisnumeroon "pari"-olento ja sen ominaisuutena on roomalaisnumero
    if (pari.merkki == c){  // Tarkastellaan kohtaa c ja mikäli taulusta löytyy annettu merkki...
      Arabialainen += pari.arvo;  // ...ynnätään löydetty numero arabialaisittain

// Muutenkiva mutta nyt numerot vain ynnäytyy. tarvii keksiä logiikka niiden vähentelyyn
// Kokeillaas että sikälimikäli vasemmalla on isompi kuin oikealla, vähennä. muuten ynnää

// IX = 9, XI = 11
//




      break;
    }
  }
}
return Arabialainen;
}
*/




// ========== PÄÄOHJELMA ====================
int main() {
//  const int size = 20;
//  int i = 0;
  string Roomalainen;

cout << "Roomalainen luku, jonka desimaaliarvon haluat tietää?";
cin >> Roomalainen;
cout << endl;

  long Arabialaisnumero =   LaskeRoomalaiset(Roomalainen);
  cout << "Desimaalimuodossa roomalainen luku " << Roomalainen <<" on " << Arabialaisnumero << endl;

//cout << Arabialaisnumero << endl;

return 0;
}


