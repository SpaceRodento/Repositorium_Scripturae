//Kirjastot
#include <iostream>
#include <string>
    using namespace std;
//======================
/*a) Tee ohjelma, joka tulostaa seuraavan tulostuksen:
1 2 3 4 5 6 7 8 9 10


b) Tee ohjelma, joka tulostaa seuraavan tulostuksen (huomaa pilkut!):
2, 4, 6, 8, 10, 12, 14, 16, 18, 20

for: ensin eka kierros;milloin tehdään looppi;darra*/

int main() {
    int luku1 = 0; // alustetaan luvut
    int luku2 = 0; // alustetaan luvut
    int jonopituus = 0;
    int i     = 0;
    string Tuloste;

// a)
    jonopituus = 10;
    //for: firma tarjoaa vain ekan kierroksen caliaa;milloin juuaan calialooppi;sit haetaan lissää
    for ( i = 1; i <= jonopituus; i++)
    {
    cout << i <<" ";
    }
    
// b)
    jonopituus = 20;
    cout << endl;
    //for: firma tarjoaa vain ekan kierroksen caliaa;milloin juuaan calialooppi;sit haetaan lissää
    for ( i = 1; i <= jonopituus; i++)
    {
        if (i == jonopituus){
            cout << i << endl;
        }
        else if (i%2 == 0){
        cout << i <<", ";
        }
    }

}
