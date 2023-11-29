//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
    using namespace std;
//======================

//====================== ALIOHJELMA  ======================
/* Taulukot. Kokonaislukutaulukkoharjoitus: Tee ohjelma jossa luot 10-alkioisen kokonaislukutaulukon tenttituloksia varten. 
Ohjelmassa on silmukka, jossa kysytään 10 tenttitulosta ja lisätään taulukkoon, kukin omaan lokeroonsa. 
Tämän jälkeen tulostetaan taulukon sisältö alkio alkiolta sekä lasketaan ja tulostetaan tulosten 
keskiarvo (käy taulukossa olevat arvot läpi ja laske niiden summa ja jaa lopulla lukujen lukumäärällä). 

Anna tallennettava tenttitulos: 9

Tenttitulos 1 on: 8

Tenttitulosten keskiarvo on: 7.5

*************************
*/

  void alioo(){
    int tentti_tulos = 0;
    int tentti_jarjestys = 0;
    const int  lukumaara = 10;
    int i = 0;
    int summa = 0;
    float keskiarvo = 0;

    int tenttiarray[lukumaara];

    for ( i = 0; i < lukumaara; i++)
    {
      cout << "Anna tallennettava tenttitulos: ";
      cin >> tentti_tulos;
      tentti_jarjestys = i;
      tenttiarray[i] = tentti_tulos;
      summa = summa + tentti_tulos;
    }
    cout << endl;
    for ( i = 0; i < lukumaara; i++)
    {
      cout <<"Tenttitulos "<< i+1 << " on: " << tenttiarray[i] << endl;
    }
    
    keskiarvo = (float)summa / (float)lukumaara;
    cout << "Tenttitulosten keskiarvo on: " << keskiarvo;

  }




// Aliohjelma loppu
//======================


// ========== PÄÄOHJELMA ====================
int main() {
  
  alioo();  // Kutsutaan aliohjelma

return 0;

}

