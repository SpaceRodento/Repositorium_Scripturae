#include <iostream>
#include <cmath>

int main() {
    double kulma { 0.0 };  // kulma asteina
    double rad { 0.0 };    // kulma radiaaneina
    const double PI { 3.14159 };  // vakio piin likiarvolle
    
    int valinta { 0 };    
    do {
        std::cout << "1) Laske kulman sini\n";
        std::cout << "2) Laske kulman kosini\n";
        std::cout << "3) Laske kulman tangentti\n";
        std::cout << "Anna valintasi numerolla ja paina Enter (0 = lopetus): ";
        std::cin >> valinta;
        
        switch (valinta) {
            case 1:
                std::cout << "Anna kulma asteina: ";
                std::cin >> kulma;
                rad = kulma * (PI / 180.0);
                std::cout << sin(rad) << "\n";
                break;
            case 2:
                std::cout << "Anna kulma asteina: ";
                std::cin >> kulma;
                rad = kulma * (PI / 180.0);
                std::cout << cos(rad) << "\n";
                break;       
            case 3:
                std::cout << "Anna kulma asteina: ";
                std::cin >> kulma;
                rad = kulma * (PI / 180.0);
                std::cout << tan(rad) << "\n";
                break;
            default:
                break;
        }
    } while (valinta != 0);
}

