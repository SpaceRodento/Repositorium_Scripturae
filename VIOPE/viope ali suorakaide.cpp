//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
    using namespace std;
//======================

//aliohjelma 
  float suorakaide(float luku1, float luku2){
    return (luku1 * luku2);
    }

/*Anna suorakaiteen korkeus: 5
Anna suorakaiteen leveys: 6
Laskettu pinta-ala on: 30*/

int main() {
//alustus
  float kanta;
  float korkeus;

  cout << "Anna suorakaiteen korkeus: ";
  cin >> korkeus;
  cout << "Anna suorakaiteen leveys: ";
  cin >> kanta;
  cout << "  Laskettu pinta-ala on: ";
  float tuloste = suorakaide(kanta, korkeus);  // Kutsutaan aliooo
  cout << tuloste << endl;

return 0;

}
