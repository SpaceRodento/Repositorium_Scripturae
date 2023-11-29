//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
    using namespace std;
//======================
/* 
Struct funktion paluuarvona. Tee funktio "luoOpiskelija", joka kysyy käyttäjältä opiskelijan tiedot funktion 
sisällä ja palauttaa paluuarvonaan valmiin opiskelijan, jonka tiedot on täytetty. Funktion prototyyppi olisi seuraavanlainen:

Opiskelija luoOpiskelija();

Ja pääohjelmassa loisit opiskelijan käyttämällä funktiota seuraavasti:

Opiskelija opiskelija1 = luoOpiskelija();

Huom! Vastaavan asian voisit tehdä toisella tavalla ja ehkä tehokkaammin käyttämällä sopivaa viittausparametria, 
mutta palaamme tähän sitten jatkokurssissa. Jos intoa riittää, niin voit etsiä aiheeseen sopivaa tietoa ja toteuttaa 
tämän viittausten avulla.

Kuinka monelle opiskelijalle luodaan tiedot? (MAX 20): 2
Anna opiskelijan etunimi: Ville
Anna opiskelijan sukunimi: Virtanen
Anna opiskelijan opiskelijanumero: 12345
Anna opiskelijan opintopisteet: 100

*/

// Struct
struct IHMINEN{ // Structin nimi on IHMINEN
  int id;
  string etunimi;
  string sukunimi;
  string opiskelijanro;
  int opisteet;
  } OPISKELIJA, OPETTAJA, SPURGU; // Structin variablet


//======== Aliohjelma: Luo opiskelija
void luoOpiskelija(IHMINEN& OPISKELIJA,int i){
  // Struct tuotiin sisään, nyt kysytään tiedot
  OPISKELIJA.id = i;
  // cout << "Opiskelijan id on nyt: "<< OPISKELIJA.id <<endl;
    cout  << "Anna opiskelijan etunimi: "<< endl ;
    cin >> OPISKELIJA.etunimi;
    cout  << "Anna opiskelijan sukunimi: "<< endl;
    cin >> OPISKELIJA.sukunimi;
    cout   << "Anna opiskelijan opiskelijanumero: "<< endl;
    cin >> OPISKELIJA.opiskelijanro;
    cout   << "Anna opiskelijan opintopisteet: "<< endl;
    cin >> OPISKELIJA.opisteet; 
}
// Aliohjelma loppu ==============================

//======== Aliohjelma: Esitä tiedot
void esitaOpiskelijat(IHMINEN& OPISKELIJA,int i){
  // Struct tuotiin sisään, nyt kysytään tiedot
  OPISKELIJA.id = i;
  // cout << "Opiskelijan id on nyt: "<< OPISKELIJA.id <<endl;
    cout << endl;
    cout << "Opiskelijan numero" << OPISKELIJA.id+1 << " tiedot." << endl;
    cout  << "Etunimi: "<< OPISKELIJA.etunimi << endl ;
    cout  << "Sukunimi: " << OPISKELIJA.sukunimi << endl;
    cout   << "Opiskelijanumero: " << OPISKELIJA.opiskelijanro << endl;
    cout   << "Opintopisteet: " << OPISKELIJA.opisteet << endl;
}
  /*
Opiskelijan numero 1 tiedot.
Etunimi: Ville
Sukunimi: Virtanen
Opiskelijanumero: 12345
Opintopisteet: 100
*/
// Aliohjelma loppu ======================


// ========== PÄÄOHJELMA ====================
int main() {
  const int size = 20;
  int i = 0;
  IHMINEN arrOPISKELIJA[size]; // pysyvä kokomuuttuja taulukolle
  int oppilasmaara = 0;

//Kuinka monelle opiskelijalle luodaan tiedot? (MAX 20): 2
cout << "Kuinka monelle opiskelijalle luodaan tiedot? (MAX 20): ";
cin >> oppilasmaara;
cout << endl;


  for (i = 0;i < oppilasmaara; i++){
    luoOpiskelija(arrOPISKELIJA[i], i);
  }

//Samalla forilla tietojen esitys?
  for (i = 0;i < oppilasmaara; i++){
    esitaOpiskelijat(arrOPISKELIJA[i], i);
  }




return 0;

}

