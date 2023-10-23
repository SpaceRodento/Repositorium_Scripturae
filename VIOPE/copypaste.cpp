#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long alioo(long luku1) {
  long long k = luku1;
  long n = luku1;

  if (luku1 <= 0) {
    cout << "virhe, nolla";
    return 1;
  } else {
    cout << "kerrotaan " << k << endl;
    for (n; n > 0; n--) {
      k = n * k;
      cout << "n = " << n << "| k = " << k << endl;
    }
  }
  return k;
}

int main() {
  long luku1;

  cout << "Anna kokonaisluku välille 0 - 16" << endl;
  cin >> luku1;

  long tuloste = alioo(luku1);  // Kutsutaan aliooo
  cout << "Luvun " << luku1 << " kertoma on " << tuloste;

  return 0;
}