//Kirjastot
#include <iostream>
#include <string>
    using namespace std;
//======================
/*  kisaversio poistamalla tuomarin pisteistä suurimman ja pienimmän arvon
 (3 keskimmäistä tuomaripistettä lasketaan yhteen ja tähän lisätään hypyn pituus x 0.9)*/

int main() {
    float hyppy = 0; // alustetaan luvut
    int i     = 1;
    float pisteet     = 0;
    float vastaus    = 0;
    float tuomaripiste = 0;
    float pistetaulu[5];
    float pieninluku = 0;
    float isoinluku = 0;
    // Puuhaus

    cout << "Hypyn pituus: ";
    cin >> hyppy;
    
    while (i <= 5){
/*        cin >> tuomaripiste;
        pistetaulu[i-1] = tuomaripiste;
        cout << "Tuomarin " << i << " pisteet: " << pistetaulu[i-1];*/
         cout  << endl;
        pistetaulu[i-1] = tuomaripiste;
        cout << "Tuomarin " << i << " pisteet: ";
        cin >> pistetaulu[i-1];

            pisteet = pisteet + pistetaulu[i-1];
            if (pistetaulu[i-1] <= pieninluku || pieninluku == 0) {
                pieninluku = pistetaulu[i-1];
            }
            if (pistetaulu[i-1] >= isoinluku || isoinluku == 0){
                isoinluku = pistetaulu[i-1];            
            }
//            cout << isoinluku << " " << pieninluku << endl;
        i++;
      }
    pisteet = pisteet - isoinluku - pieninluku;
    vastaus = pisteet + (0.9*hyppy);
    cout << "Hypyn pisteet: " << vastaus << endl;
return 0;
}
