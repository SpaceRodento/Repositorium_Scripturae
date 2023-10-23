//Kirjastot
#include <iostream>
#include <string>
#include <cmath>
    using namespace std;
//======================

//aliohjelma 
/* Anna fibonaccin lukujen maara: 12

Fibonnacci Sarja :  0 1 1 2 3 5 8 13 21 34 55 89
*/

  long alioo(long luku1){
    long i = 0;
    long k = 1;
    long l = 1;
    long n = 1;
    long m = 0;



    if (luku1 <= 1){
      cout << "virhe, nolla";
     return 1;
    }
      else
      {
       cout << "Fibonnacci Sarja :  ";
        for (n; n <= (luku1); n++)
        {
          cout << i;
          m = i;
          i = m+l;  
          l = m; 
          if (n != luku1)
          {
            cout << " ";
          }
        }
        
        }
      return (k);
    }
    
// ========== Pääohjelma
int main() {
//alustus
  long luku1 = 0;
  long long tuloste = 0;

  cout << "Anna fibonaccin lukujen maara: " ;
  cin >> luku1;
  cout << endl;

  tuloste = alioo(luku1);  // Kutsutaan aliooo
//  cout << "Fibonnacci Sarja : " << tuloste;

return 0;

}
