//Kirjastot
#include <iostream>
#include <string>
    using namespace std;
//======================
/* anna yhteenlaskettavat luvut (kun haluat lopettaa laita luvuksi 0): 5
anna yhteenlaskettavat luvut (kun haluat lopettaa laita luvuksi 0): 6
anna yhteenlaskettavat luvut (kun haluat lopettaa laita luvuksi 0): 12
anna yhteenlaskettavat luvut (kun haluat lopettaa laita luvuksi 0): 8
anna yhteenlaskettavat luvut (kun haluat lopettaa laita luvuksi 0): 0
lukujen summa: 31
*/

int main() {
    int luku1 = 6; // alustetaan luvut
    int i     = 0;
    int k     = 0;
    int vastaus    = 0;
    int luvut[100] = {};     
    string Tuloste;

    // Puuhaus
    while (luku1 != 0){
        cout << "anna yhteenlaskettavat luvut (kun haluat lopettaa laita luvuksi 0): ";
        cin >> luku1;
            luvut[i] = luku1;
            vastaus = vastaus + luvut[i];
        i++;
      }
        cout << "lukujen summa: " << vastaus << endl;
}
