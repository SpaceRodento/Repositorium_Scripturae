//Kirjastot
#include <iostream>
#include <string>
    using namespace std;
//======================
/*
Laske vapaasti putoavan kappaleen nopeus sekunneittain välillä 0-n sekuntia ja tulosta tulokset seuraavalla tavalla:

Aika     Nopeus (km/h)

0          0

1          35.316

2          70.632
Kappaleen nopeus lasketaan v = gt, missä g=9.81m/s2 ja t=aika sekunteina (tehtävässä km/h, joten sopivaa kerrointa tarvitaan

for: ensin eka kierros;milloin tehdään looppi;darra*/

int main() {
    int luku1 = 0; // alustetaan luvut
    int luku2 = 0;
    int jonopituus = 0;
    int i       = 0;
    float j     = 0;
    float g     = 0;
    string Tuloste;

// a)
    jonopituus = 5;
    g           = 9.81;
    cout << "anna aika sekunneissa: ";
    cin >> jonopituus;
    cout << endl; 
    cout << "Aika\tNopeus (km/h)" << endl;
    //for: firma tarjoaa vain ekan kierroksen caliaa;milloin juuaan calialooppi;sit haetaan lissää
    for ( i = 0; i <= jonopituus; i++)
    {
        j = (i*g)*3.6;  // V= gt ja muunnos km/h eli *3,6
        cout << i <<"\t" << j << endl;
    }


}
