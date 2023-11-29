//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
    using namespace std;

struct Tietue{
    string merkkijono;
    int kokonaisluku;
};

//Aliohjelmia
    void tulostus(Tietue aliohTietue){
        aliohTietue.merkkijono= "aliohjelman antama nimi ";
        cout << "Merkkijono on " << aliohTietue.merkkijono << " ja luku on " << aliohTietue.kokonaisluku << endl;
    }

    void tulostus2(Tietue& viiteTietue){
    // void tulostus2(const Tietue& viiteTietue){ // usein halutaan suojella alkuperäistä tietuetta vahingoilta
        viiteTietue.merkkijono = "viitetietueen antama nimi ";
        viiteTietue.kokonaisluku = 98;
        cout << "Merkkijono on nyt " << viiteTietue.merkkijono << " ja luku: " << viiteTietue.kokonaisluku << endl;
    }

    void tulostus3(Tietue arreiTietue[]){
    // arreiTietue.merkkijono= "aliohjelman antama nimi ";
        cout << "Merkkijono on " << arreiTietue[0].merkkijono << " ja luku on " << arreiTietue[0].kokonaisluku << endl;
    }

//================


int main(){

const int size = 2; // taulukkoa varten luotu pysyvä muuttuja

// Array+struct
Tietue omaTietue[size]; //aiemmin luotu kokomuuttuja. tästä voisi kehittää vectoriksi käyttö
omaTietue[0].merkkijono = "nimi";
omaTietue[0].kokonaisluku = 23;

int i = 0;
tulostus(omaTietue[i]);

    cout << "Merkkijono on " << omaTietue[i].merkkijono << " ja luku on " << omaTietue[i].kokonaisluku << endl;

/* Tietue omaTietue;
omaTietue.merkkijono = "nimi";
omaTietue.kokonaisluku=22; 
    tulostus(omaTietue);
        cout << "Merkkijono on " << omaTietue.merkkijono << " ja luku on " << omaTietue.kokonaisluku << endl;
*/

tulostus2(omaTietue[i]);
    cout << "Merkkijono viiteohjelman jalkeen on " << omaTietue[i].merkkijono << " ja luku on " << omaTietue[i].kokonaisluku << endl;

const int size = 2;
}