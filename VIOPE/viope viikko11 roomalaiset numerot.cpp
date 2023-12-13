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
    long lopputulos = 0;
      // otetaan stringinä vastaan asioita ja annetaan vastaava numero
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

  vector<int> vecArabialaisLuvut;   // Luodaan vektori käännetyistä numeroista
    for (char c : Roomalainen){       //Käydään läpi forrilla roomalaiset ja käännetään niitä yksittäin
      for (structRoomalaisNumero& pari : roomalaisNumeroTaulu){ //määritellään arabian pari roomalaisnumerolle
        if (pari.merkki == c){
          Arabialainen = pari.arvo;
          vecArabialaisLuvut.push_back(Arabialainen); //pusketaan vektorin perälle löydetty numero
        }
      }
    }

// ==== LOPPUTULOSLASKELMA ====
// Käydään tämä luotu arabialaisvektori läpi ja verrataan niitä keskenään, ynnätään tai vähennellään loppusummaksi
    int edellinen = vecArabialaisLuvut[0];  // alustetaan edelliseksi vektorin ensimmäinen luku
      for_each(vecArabialaisLuvut.begin(), vecArabialaisLuvut.end(), [&](int nykyinen){ // käydään for_eachillä luvut läpi vektorissa
        if (nykyinen <= edellinen){     // 1<5 VI
            lopputulos += nykyinen;
              // cout << " (nykyinen+): " << nykyinen ;          
              // cout << " (ed+): "      << edellinen ;          
              // cout << " lopputulos: " << lopputulos << endl;
        }

          else if (nykyinen > edellinen){ // 5>1 IV
            lopputulos = lopputulos+nykyinen - 2*edellinen; // näyttää oudolta, mutta vähentelystä tuli muuten 0
              // cout << " (nykyinen-): " << nykyinen ;          
              // cout << " (ed-): "      << edellinen ;          
              // cout << " lopputulos: " << lopputulos << endl;
          }
        edellinen = nykyinen;
      });

/*      // testinä tulostellaan vektorin kaikki lukemat ulos
      for (int luku : vecArabialaisLuvut){
      cout << "vektori: "<< luku << " " << endl;}
*/
      return lopputulos;
  }

  // ========== PÄÄOHJELMA ====================
  int main(){
    string Roomalainen;

  cout << "Roomalainen luku, jonka desimaaliarvon haluat tietää?";
  cin >> Roomalainen;
  cout << endl;

    long Arabialaisnumero =   LaskeRoomalaiset(Roomalainen);
    cout << "Desimaalimuodossa roomalainen luku " << Roomalainen <<" on " << Arabialaisnumero << endl;

  return 0;
  }


