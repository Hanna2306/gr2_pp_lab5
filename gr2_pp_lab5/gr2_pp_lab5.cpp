#include <iostream>
using namespace std;

int main() {
	//zadanie 1

	/*
	int tab[9];

	for (int i = 0; i <= 9; i++) {
		cin >> tab[i];
	}

	for (int n = 9; n >= 0; n--) {
		cout << tab[n] << endl;
	} */

	//zadanie 2

	/* int n;
	cout << "Ile liczb:" << endl;
	cin >> n;

	int tab[n];

	tab[0] = 0;
	tab[1] = 1;


	for (int i = 2; i < n; i++) {
		tab[i] = tab[i - 2] + tab[i - 1];
	}

	for (int a = 0; a < n; a++) {
		cout << tab[a] << endl;
	}  */


	//zadanie 3
	int tab[9];
	int pomsred = 0;
	int srednia;
	int naj, najw;
	int ile = 0;

	for int(i = 0; i < 10; i++) {
		tab[i] =
	}

	for (int i = 0; i < 10; i++) {
		pomsred = pomsred + tab[i];

	}
	srednia = pomsred / 2;
	cout << "Srednia wynosi " << srednia << endl;

	for (int i = 0; i < 10; i++) {
		if (tab[i] < srednia)
			ile = ile + 1;
	}
	cout << "Jest " << ile << " liczb mniejszych od sredniej."

		for (int i = 0; i < 10; i++) {

	}

	return 0;
}