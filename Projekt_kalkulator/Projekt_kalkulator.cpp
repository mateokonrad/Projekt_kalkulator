// Mateusz Wabinski_2_rok_4_semestr_nr_indeksu_146326_Grupa_D1

#include <iostream>



using namespace std;

class Kalkulator {

public:

	virtual double oblicz() = 0;

};



class Dodawanie : public Kalkulator {
private:

	double skladnik1, skladnik2;

public:

	Dodawanie(double skladnik1, double skladnik2) {
		this->skladnik1 = skladnik1;
		this->skladnik2 = skladnik2;
	}
	double oblicz() {
		return skladnik1 + skladnik2;
	}
};

class Odejmowanie : public Kalkulator {
private:
	double odjemna, odjemnik;

public:
	Odejmowanie(double odjemna, double odjemnik) {
		this->odjemna = odjemna;
		this->odjemnik = odjemnik;
	}
	double oblicz() {
		return odjemna - odjemnik;
	}

};

class Mnozenie : public Kalkulator {
private:
	double czynnik1, czynnik2;

public:

	Mnozenie(double czynnik1, double czynnik2) {
		this->czynnik1 = czynnik1;
		this->czynnik2 = czynnik2;
	}
	double oblicz() {
		return czynnik1 * czynnik2;
	}

};


class Dzielenie : public Kalkulator {
private:
	double dzielna, dzielnik;

public:

	Dzielenie(double dzielna, double dzielnik) {
		this->dzielna = dzielna;
		this->dzielnik = dzielnik;
	}
	double oblicz() {
		return dzielna / dzielnik;
	}
};

int main(int argc, char** argv) {

	Kalkulator* kalkulator;
	double lewy, prawy;
	int wybor;



	do {

		cout << "Wybierz operacje ktora chcesz wykonaÄ‡:" << endl;
		cout << "1 - dodawanie" << endl;
		cout << "2 - odejmowanie" << endl;
		cout << "3 - mnozenie" << endl;
		cout << "4 - dzielenie" << endl;
		cout << "0 - koniec" << endl;
		cin >> wybor;

		switch (wybor) {
		case 0:
			cout << "Koniec " << endl;
			break;
		case 1:
			cout << "Podaj pierwszy skladnik: "; cin >> lewy;
			cout << "Podaj drugi skladnik: "; cin >> prawy;
			kalkulator = new Dodawanie(lewy, prawy);
			cout << lewy << " + " << prawy << " = " << kalkulator->oblicz() << endl;
			break;
		case 2:
			cout << "Podaj odjemna: "; cin >> lewy;
			cout << "Podaj odjemnik: "; cin >> prawy;
			kalkulator = new Odejmowanie(lewy, prawy);
			cout << lewy << " - " << prawy << " = " << kalkulator->oblicz() << endl;
			break;
		case 3:
			cout << "Podaj pierwszy czynnik: "; cin >> lewy;
			cout << "Podaj drugi czynnik: "; cin >> prawy;
			kalkulator = new Mnozenie(lewy, prawy);
			cout << lewy << " * " << prawy << " = " << kalkulator->oblicz() << endl;
			break;
		case 4:
			cout << "Podaj dzielna: "; cin >> lewy;
			cout << "Podaj dzielnik: "; cin >> prawy;
			kalkulator = new Dzielenie(lewy, prawy);
			cout << lewy << " / " << prawy << " = " << kalkulator->oblicz() << endl;
			break;
		default:
			cout << "Brak takiej opcji " << endl;
			break;
		}



	} while (wybor != 0);


	return 0;
}