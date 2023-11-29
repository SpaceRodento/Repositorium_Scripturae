// Laskee monesko päivä vuodesta nyt on menossa.
// Ottaa huomioon myös karkausvuoden.

#include <iostream>

int main() {
    int p{ 11 };  // kuukauden päivän numero
    int k{ 20 }; // kuukauden numero
    int v{ 2023 };  // vuosiluku
    
    if (k < 1 || k > 12) {
        std::cout << "Älä nyt hulluja ehdottele. Ohjelma päättyy.\n";
        return 0;
    }

    int summa{ 0 };  // tähän kertyy vuodesta kuluneiden päivien lukumäärä

    // Silmukka käy läpi arvot 1 ... kuukausi-1.
    // Muuttuja i edustaa tarkasteltavaa kuukautta.
    // Eri tapauksia on kolme: 31-päiväiset, 30-päiväiset ja helmikuu.
    for (int i{ 1 }; i < k; i++) {
        switch (i) {
            case 1: case 3: case 5: case 7:
            case 8: case 10: case 12:
                summa = summa + 31;
                break;
            case 4: case 6: case 9: case 11:
                summa = summa + 30;
                break;
            case 2:
                summa = summa + 28;                
                // Jos vuosi on karkausvuosi, lisätään karkauspäivä (29.2.)
                if (((v % 4 == 0) && (v % 100 != 0)) || (v % 400 == 0)) {
                    summa = summa + 1;
                }
                break;
            default:
                std::cout << "Kuukauden numeron pitää olla 1...12!\n";
                break;
        }
    }
    
    summa = summa + p;  // lisätään "vajaan" kuukauden päivät 
    
    std::cout << summa;
}

// Jos löydät algoritmista virheen, kerro siitä!
