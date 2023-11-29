//VECTOR
//==============
#include <vector>
#include <iostream>




int main(){
    std::vector<int> tulokset;
    int tulos = 0;

    do{
        std::cout << "anna tulos: ";
        std::cin >> tulos;

        if (tulos > 0) {
            tulokset.push_back(tulos);  // pusketaan vektorin jonoon luvun

        }
    } while (tulos > 0);

    std::cout << "Vektorissa on " << tulokset.size() << " alkiota \n";
    // size() palauttaa vektoriin pituuden


//häröesimerkki tunnilta, ei välttis toimi
for (size_t i{0};i< tulokset.size();i++){
    tulokset.at(i) *=10;
}


// Toinen esmes

std::vector <Paikka> paikat;
paikat.push_back(tampere);
paikat.push_back(helsinki);
paikat.push_back({"turkus", {60.451389}, 11});

//tulostus vektorin erikoisuudella
cout << "Kaikki paikat: "
for (const Paikka& p : paikat){
    tulostapaikka(p);
    cout endl;
}


}


