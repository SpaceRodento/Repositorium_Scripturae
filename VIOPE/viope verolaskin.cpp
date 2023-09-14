//Kirjastot
#include <iostream>
#include <string>
    using namespace std;
//======================


int main() {
    float luku1 = 0; // alustetaan luvut
    float KunnallisveroRaha = 0;
    float luku2 = 0;
    float luku3 = 0;
    float luku4 = 0;
    float KunnallisveroProsentti = 19.75;
    float Prosentti = 0;
//    string Tuloste;

  cout << "Syota tulosi: ";
  cin >> luku1;

    // Manipuloi
    // pitäis värkätä minimirajan ylittävälle osalle oma luku, josta voidaan laskea prosentti
  if (luku1 > 71400) {  
        Prosentti = 31.5;
        luku2 = luku1 - 71400;  }
  if (luku1 <= 71400 && luku1 > 41200) {  
        Prosentti = 21.5;  
        luku2 = luku1 - 41200;}
  if (luku1 <= 41200 && luku1 > 25300) {  
        Prosentti = 17.5;  
        luku2 = luku1 - 25300;}
  if (luku1 <= 25300 && luku1 > 16900) {  
        Prosentti = 6.25;  
        luku2 = luku1 - 16900;}
/*
Syota tulosi: 20000
Sinun pitaa maksaa 4151.75 euroa veroa.
16 900—25 300	  8	      6,25
25 300—41 200	  533	    17,5
41 200—71 400	  3315,50	21,5
71 400—	        10174	   31,5
*/

// ensin vähennetään kokonaistuloista kunnallisvero
KunnallisveroRaha = (KunnallisveroProsentti * (luku1/100)); 

// laskettiin jo minimirajan ylittävä summa (luku2), 
// luku3 =  luku2 ;
// nämä ynnäillään kömpelösti lopputulokseksi
luku4 = KunnallisveroRaha + (Prosentti * (luku1/100));

cout << "Sinun pitaa maksaa " << luku4 << " euroa veroa.";  
}
