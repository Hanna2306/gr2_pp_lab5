#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main() {
	srand(time(NULL));
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
	/*  int tab[10];
	int pomsred = 0;
	int srednia;
	int najm, najw;
	int ile = 0;

	for (int i = 0; i < 10; i++) {
		tab[i] = (rand() % 10 ) + 1;
		cout << tab[i] << endl;
	}

	for (int i = 0; i < 10; i++) {
		pomsred = pomsred + tab[i];

	}
	srednia = pomsred / 10;
	cout << "Srednia wynosi " << srednia << endl;

	for (int i = 0; i < 10; i++) {
		if (tab[i] < srednia)
			ile = ile + 1;
	}
	cout << "Jest " << ile << " liczb mniejszych od sredniej." << endl;


	najw = tab[0];
		for (int i = 1; i < 10; i++) {
			if (tab[i] > najw)
				najw = tab[i];
	}
	cout << "Najwieksza liczba to " << najw << endl;
		
	najm = tab[0];
	for (int i = 1; i < 10; i++) {
		if (tab[i] < najm)
			najm = tab[i];
	}
	cout << "Najmniejsza liczba to " << najm << endl;
	*/

	//zadanie 4

	/*	int w;
		int k;
		cout << "Podaj liczbe wierszy " << endl;
		cin >> w;
		cout << "Podaj liczbe kolumn " << endl;
		cin >> k;

		int macierz[w][k];
		cout << "Podaj elementy macierzy: " << endl;
		for (int i = 0; i < w; i++) {
			for (int j = 0; j < k; j++) {
				cout << "macierz[" << i << "][" << j << "] = " << endl;
				cin >> macierz[i][j];
			}
		}

		cout << "macierz: " << endl;
		for (int i = 0; i < w; i++) {
			for (int j = 0; j < k; j++) {
				cout << macierz[i][j] << endl;
			}
			cout << endl;
		}
		*/

	

	//zadanie 5
	/*  int tab[10] = {0};
	int n;

	cout << "Ile liczb chcesz podac (0-10)? ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "liczba." << i << " ";
		cin >> tab[i];
	}

	int suma = 0;
	for (int i = 0; i < 10; i++) {
		suma += tab[i];
	}

	double srednia = suma / 10.0;
	cout << "Srednia: " << srednia << endl;

	int min = tab[0];
	int max = tab[0];
	for (int i = 1; i < 10; i++) {
		if (tab[i] < min) min = tab[i];
		if (tab[i] > max) max = tab[i];
	}

	cout << "Najmniejsza liczba: " << min << endl;
	cout << "Najwieksza liczba: " << max << endl;
	*/


// zadanie 6

/* int tab[10];
int numerek, licznik;
licznik = 0;
numerek = (rand() % 10) + 1;
cout << "Szczesliwy numerek to: " << numerek << endl;
for (int i = 0; i < 10; i++) {
	tab[i] = (rand() % 10) + 1;
	if (numerek == tab[i])
		licznik = licznik + 1;
}
cout << "Szczesliwy numerek zostal wylosowany " << licznik << " razy." << endl;
*/


//zadanie 7


/* #include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Podaj rozmiar macierzy: ";
	cin >> n;

	int A[n][n];
	int B[n][n];
	int C[n][n];

	cout << "Podaj elementy macierzy A:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "A[" << i << "][" << j << "]: ";
			cin >> A[i][j];
		}
	}

	cout << "Podaj elementy macierzy B:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "B[" << i << "][" << j << "]: ";
			cin >> B[i][j];
		}
	}

	// Dodawanie macierzy
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	cout << "Suma macierzy wynosi:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
*/
 

//zadanie 8

	/*  int n;
	cout << "Podaj rozmiar macierzy " << endl;
	cin >> n;
	int A[n][n];
	int B[n][n];
	int C[n][n];

	cout << "Podaj elementy macierzy A " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "A " << i << " " << j << ": ";
			cin >> A[i][j];
		}
	}

	cout << "Podaj elementy macierzy B " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "B " << i << " " << j << ": ";
			cin >> B[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			C[i][j] = A[i][j] * B[i][j];
		}
	}

	cout << "Iloczyn macierzy: " << endl;
		for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << C[i][j] << endl;
		}
		cout << endl;
	} */

//zadanie 9
/*
		int n;
		cout << "Podaj rozmiar macierzy: " endl;
		cin >> n;

		int A[10][10];
		cout << "Podaj elementy macierzy: " << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << "A" << i << "  " << j << " ";
				cin >> A[i][j];
			}
		}
		
		int suma = 0;
		for (int i = 0; i < n; i++) {
				suma += A[i][i];
		}

		cout << "Suma elementow na glownej przekatnej : " << suma << endl;
		

	*/


//zadanie 10




	return 0;
}