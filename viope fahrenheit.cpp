//Kirjastot
#include <iostream>
#include <string>
    using namespace std;
//======================


int main() {
    float luku1 = 0; // alustetaan luvut
    float luku2 = 0;
    float luku3 = 0;
    float luku4 = 0;
    char Yksikko;

  cout << "Syota lampotila: ";
  cin >> luku1;
  cout << "Syota yksikko (C = Celsius tai F = Fahrenheit):";
  cin >> Yksikko;

    // Manipuloi °F = (°C) · 1,8 + 32
      luku4 = luku1 * 1.8+32;
//  if (luku1 <= 25300 && luku1 > 16900) {  
//        luku2 = luku1 - 16900;}

/*
Syota lampotila: -12
Syota yksikko (C = Celsius tai F = Fahrenheit): C
-12 Celsius = 10.4 F
Syota lampotila: 10.4

10.4 Fahrenheit = -12 Celsius

Syota lampotila: -12
Syota yksikko (C = Celsius tai F = Fahrenheit): C
-12 Celsius = 10.4 F
*/


cout << luku1 << " Celsius = " << luku4 << " F";  
}
