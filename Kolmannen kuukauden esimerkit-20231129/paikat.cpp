#include <iostream>
#include <string>
#include <vector>
#include <numbers>  // HUOM.! C++20

struct Sijainti {
	double leveysaste;
	double pituusaste;
};

void tulostaSijainti(const Sijainti& s) {
	using std::cout;

	cout << "(" << s.leveysaste
		<< ", " << s.pituusaste
		<< ")";
}

struct Paikka {
	std::string nimi;  // paikasta yleisesti k‰ytetty nimi
	Sijainti sijainti;  // paikan koordinaatit
	int korkeus;  // paikan korkeus merenpinnasta
};

void tulostaPaikka(const Paikka& p) {
	using std::cout;

	cout << p.nimi << " ";
	tulostaSijainti(p.sijainti);
	cout << " " << p.korkeus << " m";
}

// Korottaa annetun luvun toiseen potenssiin.
double sqr(double x) {
	return x * x;
}

// Muuntaa asteluvun radiaaneiksi trigonometriaa varten.
// HUOM. muista "#include <numbers>" ja vaihda
// Visual Studiossa projektin C++-versioksi C++20.
double rad(double a) {
	return a * (std::numbers::pi / 180.0);
}

double laskeValimatka(const Sijainti& s1, const Sijainti& s2) {
	// maapallon keskim‰‰r‰inen s‰de metrein‰
	const double R = 6371e3;

	double f1 = rad(s1.leveysaste);
	double f2 = rad(s2.leveysaste);
	double df = rad(s2.leveysaste - s1.leveysaste);
	double dl = rad(s2.pituusaste - s1.pituusaste);

	double a = sqr(sin(df / 2.0)) +
		cos(f1) * cos(f2) *
		sqr(sin(dl / 2.0));

	double c = 2.0 * atan2(sqrt(a), sqrt(1.0 - a));

	return R * c;
}

int main() {
	using std::cout;

	Sijainti tre;
	tre.leveysaste = 61.498056;
	tre.pituusaste = 23.760833;

	//tulostaSijainti(tre);
	//cout << '\n';

	Sijainti hki{ 60.170833, 24.9375 };
	//tulostaSijainti(hki);
	//cout << '\n';

	Paikka tampere{ "Tampere", { 61.498056, 23.760833 }, 86 };
	Paikka helsinki{ "Helsinki", { 60.170833, 24.9375 }, 2 };
	//tulostaPaikka(tampere);
	//cout << '\n';
	//tulostaPaikka(helsinki);
	//cout << '\n';

	std::vector<Paikka> paikat;
	paikat.push_back(tampere);
	paikat.push_back(helsinki);

	paikat.push_back({ "Saariselk‰", { 68.25, 28.166667 }, 718 });
	paikat.push_back({ "Turku", { 60.451389, 22.266667 }, 1 });
	paikat.push_back({ "Kuopio", { 62.8925, 27.678333 }, 82 });
	paikat.push_back({ "Jyv‰skyl‰", { 62.240278, 25.744444 }, 92 });

	int korkein{ 0 };
	std::string nimi;

	cout << "Kaikki paikat:\n";
	for (const Paikka& p : paikat) {
		tulostaPaikka(p);
		cout << '\n';

		if (p.korkeus > korkein) {
			korkein = p.korkeus;
			nimi = p.nimi;
		}

		cout << "V‰limatka Tampere - " << p.nimi << " = ";
		cout << laskeValimatka(tampere.sijainti, p.sijainti) / 1000.0 << " km\n";
	}
	cout << "Korkein paikka on " << nimi << ", " << korkein << " m.\n";
}
