#include <iostream>

int main() {
    using namespace std;

  // Alusta
  int kilometrit;
  float bensanHinta;
  float dieselinHinta;
  float bensaAutonKulutus;
  float dieselAutonKulutus;
  float dieselVero;
  int bensaAutonMatkakulut;
  int dieselAutonMatkakulut;    


/*Syota vuodessa ajetut kilometrit: 100000
Syota bensan hinta euroa per litra: 2
Syota dieselin hinta euroa per litra: 1.6
Syota bensa-auton kulutus litraa per 100km: 10
Syota diesel-auton kulutus litraa per 100km: 7
Syota diesel kayttovero: 2000
Vuotuiset matkakulut bensa-autolle ovat 20000 euroa.
Vuotuiset matkakulut diesel-autolle ovat 13200 euroa
Diesel-auto tulee halvemmaksi 6800 euroa*/

  std::cout << "Syota vuodessa ajetut kilometrit: ";
  std::cin >> kilometrit;

  std::cout << "Syota bensan hinta euroa per litra: ";
  std::cin >> bensanHinta;

  std::cout << "Syota dieselin hinta euroa per litra: ";
  std::cin >> dieselinHinta;

  std::cout << "Syota bensa-auton kulutus litraa per 100 km: "<< std::endl;
  std::cin >> bensaAutonKulutus;

  std::cout << "Syota diesel-auton kulutus litraa per 100 km: "<< std::endl;
  std::cin >> dieselAutonKulutus;

  std::cout << "Syota diesel kayttovero: "<< std::endl;
  std::cin >> dieselVero;

// Laske 
// kilometrimäärä x bensan kulutus x bensan hinta
    bensaAutonMatkakulut = kilometrit * (bensaAutonKulutus/100) * bensanHinta;
    dieselAutonMatkakulut = kilometrit * (dieselAutonKulutus/100) * dieselinHinta + dieselVero;

  // esita
  std::cout << "Vuotuiset matkakulut bensa-autolle ovat " << bensaAutonMatkakulut << " euroa." << std::endl;
  std::cout << "Vuotuiset matkakulut diesel-autolle ovat " << dieselAutonMatkakulut << " euroa" << std::endl;

  // Vertaa
  if (dieselAutonMatkakulut < bensaAutonMatkakulut) {
    std::cout << "Diesel-auto tulee halvemmaksi " << bensaAutonMatkakulut - dieselAutonMatkakulut << " euroa" << std::endl;
    } else {
        std::cout << "Bensa-auto tulee halvemmaksi " << dieselAutonMatkakulut - bensaAutonMatkakulut << " euroa" << std::endl;
    }
}

