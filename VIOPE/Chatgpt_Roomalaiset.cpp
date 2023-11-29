#include <iostream>
#include <vector>

// Struct pari
struct RoomalainenNumero {
    char merkki;
    int arvo;
};

int muunnaRoomalainenArabiaksi(const std::string& roomalainen) {
    // Vektori roomalaisista numeroista ja niiden arvoista
    std::vector<RoomalainenNumero> roomalaisetNumerot = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int arabialainen = 0;

    // Käydään läpi jokainen merkki roomalaisessa numerossa
    for (char c : roomalainen) {
        // Etsitään vastaava arvo vektorista
        for (const RoomalainenNumero& pari : roomalaisetNumerot) {
            if (pari.merkki == c) {
                arabialainen += pari.arvo;
                break;
            }
        }
    }

    return arabialainen;
}

int main() {
    std::string roomalainen;
    std::cout << "Anna roomalainen numero: ";
    std::cin >> roomalainen;

    int arabialainen = muunnaRoomalainenArabiaksi(roomalainen);
    std::cout << "Arabialainen numero: " << arabialainen << std::endl;

    return 0;
}
