//Kirjastot
#include <iostream>
#include <string>
using namespace std;
//======================

int main() {
    int luku = 42; // alustetaan luvut
    int luku2 = 0;
    string Tuloste;

    cout << "Ajattelen jotain lukua v�lilt� 1..100. Arvaatko sen?" << endl;
    // Peli alkaa
    bool jatkuu{ true };
    while (jatkuu) {
        cout << "Anna arvauksesi: ";
        int arvaus;
            cin >> arvaus;
            if (arvaus < luku) {
                cout << "liian pieni ";
        }
            else if (arvaus > luku) {
                cout << "liian suuri";
            }
            else {
                cout << "Oikein!";
                jatkuu = false;
            }
    }
    //Peli loppuu
    cout << "Kiit�n pelist�. ";

}



// Applicatio_Consolae.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}
*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
