//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
    using namespace std;
//======================

int main() {
    float luku1 = 0; // alustetaan luvut
    float luku2 = 0;
    float luku3 = 0;
    float luku4 = 0;
    string Tuloste;
    int laskutoimitus;
    int loop = 0;

/*Valitse laskutoimitus (1=neliöjuuri, 2=log, 3=exp ja 4=tan, L=lopetus): 1
Syötä luku: 81
Syöttämäsi luvun neliöjuuri on 9
Valitse laskutoimitus (1=neliöjuuri, 2=log, 3=exp ja 4=tan, L=lopetus): 2
Syötä luku: 10
Syöttämäsi luvun logaritmi on 2.30259
Valitse laskutoimitus (1=neliöjuuri, 2=log, 3=exp ja 4=tan, L=lopetus): L*/

while(loop != 99){

  cout << "Valitse laskutoimitus (1=neliöjuuri, 2=log, 3=exp ja 4=tan, L=lopetus): ";
  cin >> laskutoimitus;
  
    if (laskutoimitus < 1 || laskutoimitus > 4) {
        loop = 99;
        continue; // Ohita luku1:n kysyminen
    }

  cout << "Syötä luku: ";
  cin >> luku1;

switch (laskutoimitus)
{
case 1:
 // luku4 = sqrt( luku1);
  // Esitä
  {  cout << "Syöttämäsi luvun neliöjuuri on "<< sqrt(luku1) << endl;  }
  break;
case 2:
  {  cout << "Syöttämäsi luvun logaritmi on "<< log(luku1) << endl;}
  break;
case 3:
  {  cout << "Syöttämäsi luvun exponentti on "<< exp(luku1) << endl;}
  break;
case 4:
  {  cout << "Syöttämäsi luvun tangentti on "<< tan(luku1) << endl;}
  break;
default:
loop = 99;
  break;
}
}
return 0;

}
