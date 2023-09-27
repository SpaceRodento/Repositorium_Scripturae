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
    float saldo = 0; // alustetaan luvut
    float talletus = 0;
    float nosto = 0;
    int toiminto = 0;
    string Tuloste;


/*Tervetuloa!
Tililla on rahaa: 0 euroa
Valitse toiminto (1.Talleta, 2.Nosta, 3.Lopeta): 1
Syota talletettava rahasumma: 4000
Tililla on rahaa: 4000 euroa
Valitse toiminto (1.Talleta, 2.Nosta, 3.Lopeta): 2
Syota nostettava summa: 200
Tililla on rahaa: 3800 euroa
Valitse toiminto (1.Talleta, 2.Nosta, 3.Lopeta): 3
Nakemiin.*/

// Käyttis
cout << "Tervetuloa!" << endl;
while (toiminto !=3)
  {
    cout << "Tililla on rahaa: " << saldo << " euroa" << endl;
    cout << "Valitse toiminto (1.Talleta, 2.Nosta, 3.Lopeta): ";
    cin >> toiminto;
      
  switch (toiminto)  
  {
    case  1:
      cout << "Syota talletettava rahasumma: ";
      cin >> talletus;
      saldo = saldo + talletus;
    break;

    case 2:
      cout << "Syota nostettava summa: ";
      cin >> nosto;
      //tehdään tilin tarkistus
      if (saldo >= nosto) {
        saldo = saldo - nosto;
      } else {
          cout << "Ei sul oo rahnoo" << endl;
      }
    break;

    case 3:
    cout << "Nakemiin." << endl;
    break;
  }


  }
}