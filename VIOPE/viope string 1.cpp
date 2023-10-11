//Kirjastot
#include <iostream>
#include <string>
    using namespace std;
int main() {

    //Luo viisi merkkijonoa (string), joiden nimet ovat: ’Etunimi’, ’Sukunimi’, ’Osoite’, ’Katunumero’, ’Postinumero’ ja ’Kunta’.
    string etunimi, sukunimi, osoite, katunro, postinumero, kunta;
    int etunimen_pituus;
    int sukunimen_pituus;

    //Tämän jälkeen ohjelma kysyy käyttäjältä etunimen, sukunimen, osoitteen sekä kunnan.
    cout << "Syötä etunimi: ";
    cin >> etunimi;
    cout << "Syötä sukunimi: ";
    cin >> sukunimi;
    cout << "Syötä osoite: ";
    cin >> osoite;
    cout << "Syötä katunumero: ";
    cin >> katunro;
    cout << "Syötä postinumero: ";
    cin >> postinumero;
    cout << "Syötä kunta: ";
    cin >> kunta;
    cout << endl;

// Puuhaus
    cout << "Osoitteesi on: " << etunimi << " " << sukunimi << " " << osoite << " " << katunro << " " << postinumero << " " << kunta << endl;

    //Ilmoita ohjelman 3a lopussa, onko henkilön etu- vai sukunimi aakkosissa ensin. Ilmoita käyttäjälle myös, montako kirjainta henkilön nimessä on.
    etunimen_pituus = etunimi.length();
    sukunimen_pituus = sukunimi.length();

    //Vertaillaan etu- ja sukunimen aakkosellista järjestystä
    bool etunimi_ensin = etunimi < sukunimi;
    cout << endl;
    // Tuloste
    if (etunimi_ensin)
    {
    cout << "Etunimesi on aakkosissa ensin ja sen pituus on: " << etunimen_pituus << endl;
    }
        else {
        cout << "Etunimesi on aakkosissa myöhemmin ja sen pituus on: " << etunimen_pituus << endl;
        }
    return 0;
}
