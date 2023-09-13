//Kirjastot
#include <iostream>
#include <string>
    using namespace std;
//======================

int main() {
    float luku1 = 0; // alustetaan luvut
    float luku2 = 0;
    //float luku3 = 0;
    int i     = 0;
    string Tuloste;

  cout << "Anna luku: ";
  cin >> luku1;
  
    // Manipuloi
    while (i < luku1) {
        cout << "Hello World!" << endl;
        i++ ;   }

    // Sarja
    for (i = 0; i < 15; i++){
       luku2 ++ ;
       cout << luku2 << " " ;
      }

  
/*a) Tee silmukka, joka kysyy käyttäjältä luvun n, minkä jälkeen ohjelma tulostaa n kertaa "Hello World!"
b) Tee silmukka, joka tulostaa seuraavan lukusarjan:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15*/
}
