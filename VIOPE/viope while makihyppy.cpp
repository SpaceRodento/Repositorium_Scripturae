//Kirjastot
#include <iostream>
#include <string>
    using namespace std;
//======================
/* Hypyn pituus: 90.5
Tuomarin 1 pisteet: 17.5
Tuomarin 2 pisteet: 18
Tuomarin 3 pisteet: 18.5
Tuomarin 4 pisteet: 17.5
Tuomarin 5 pisteet: 16
Hypyn pisteet: 168.95

17.5+18+18.5+17.5+16 + (0.9*90.5)
(tyylipisteet + 0,9 * hypyn pituus)
*/

int main() {
    float hyppy = 0; // alustetaan luvut
    int i     = 1;
    float pisteet     = 0;
    float vastaus    = 0;
    float luvut[100] = {};
    float pistetaulu[10] = {17.5,18,18.5,17.5,16};

    // Puuhaus

    cout << "Hypyn pituus: ";
    cin >> hyppy;
    
    while (i <= 5){
        cout << "Tuomarin " << i << " pisteet: " << pistetaulu[i-1];
        //cin >> tuomaripiste;
        cout  << endl;
            pisteet = pisteet + pistetaulu[i-1];
        i++;
      }
    vastaus = pisteet + (0.9*hyppy);
    cout << "Hypyn pisteet: " << vastaus << endl;
return 0;
}
