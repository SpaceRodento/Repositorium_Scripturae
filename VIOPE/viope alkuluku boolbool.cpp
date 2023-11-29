//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
    using namespace std;
//======================

//====================== ALIOHJELMA  ======================
/* 
Aliohjelmat, boolean -muuttuja. Matematiikassa määritellään jokin kokonaisluku alkuluvuksi, mikäli kyseinen 
luku on jaollinen vain itsellään ja luvulla 1. Tee aliohjelma, joka tutkii, onko parametrina annettu luku 
alkuluku. Aliohjelman paluuarvon tyyppi on bool. Mikäli luku on alkuluku, palauttaa aliohjelma arvon true, 
muuten arvon false. Tee pääohjelma, jossa etsit ja tulostat kaikki alkuluvut välillä 0-1000. 
(Vihje: Käytä silmukkaa laskurilla 0-1000. Silmukan sisällä kutsut aliohjelmaa kullakin luvulla ja
tulostat luvun, mikäli luku on alkuluku.)

*/

bool alkutarkastelu(int luku){
  int tulos = 0;
  bool tuomio = false;
  int i = 0;
/*Modulo - jakojäännös

luku %2 = 0
0 = parillinen
1 = pariton

nyt kokeillaan luku % i eli otetaan syötetty luku ja katsotaan jakojäännös yksi kerrallaan 2 -> lukuun asti
jos jakojäännös on 0, keskeytetään ohjelma ja tulostetaan lukema esiin.
*/
  for (i = 2; i < luku; i++)
  {
  int jakojaannos = luku % i;
//  cout <<"(" << luku << "%" << i << "= " << jakojaannos << ") ";

  if (jakojaannos == 0)
  {
    
    tuomio = true;
//    cout << "(seis, pannaan tuomiolle. jakojaannos : " << jakojaannos << ") ";
    break;
  }  
  }

  return tuomio;
}
// Aliohjelma loppu
//======================


// ========== PÄÄOHJELMA ====================
int main() {
 // int sademaara = 0;
  const long lukujenmaara = 50;
  bool tuomittu = false;
 // long arr_alkuluku[lukujenmaara];
  
for (long i = 2; i <= lukujenmaara; i++)
{
  tuomittu =  alkutarkastelu(i);
//  cout << "tuomio: " << tuomittu << ", " << endl;
  if (tuomittu == false)
  {
    cout << i << ", ";
  }
  
}

return 0;
}

