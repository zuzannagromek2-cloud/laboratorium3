// laboratorium3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
	//zad.1
	/*int a;
	int b;
	cout << "Podaj liczby a i b" << endl;
	cin >> a >> b;
	if (a == b) {
		cout << "Podane liczby sa sobie rowne" << endl;
	}
	else if (a > b) {
		cout << "Liczba " << a << " jest wieksza od liczby " << b << endl;
	}
	else{
		cout << "Liczba " << a << " jest mniejsza od liczby " << b << endl;
}
	return 0;

}*/
//zad.2
	/*int a;
	int b;
	cout << "Podaj liczby a i b" << endl;
	cin >> a >> b;
	if (a == b) {
		cout << "Podane liczby sa sobie rowne" << endl;
	}
	else {
		if (a > b)
			cout << "Liczba " << a << " jest wieksza od liczby " << b << endl;

	else {
		if (a < b) {
			cout << "Liczba " << a << " jest mniejsza od liczby " << b << endl;
		}
		}
}
	return 0;

}*/
//zad.3
	/*double r;
	cout << "Podaj liczbe r" << endl;
	cin >> r;
	if (0.7 <= r <= 1) {
		cout << "bardzo silna korelacja dodatnia" << endl;
	}
	if (r >= 0.5) {
		cout << "silna korelacja dodatnia" << endl;
	}
	if (r >= 0.3) {
		cout << "umiarkowana kolreacja dodatnia" << endl;
	}
	if (r >= 0.2) {
		cout << "slaba korelacja dodatnia" << endl;
	}
	if (r >= 0) {
		cout << "brak korelacji" << endl;
	}
	return 0;
}*/
//zad.4
	/*double a;
	double b;
	char znak;
	cout << "Podaj dwie liczby zmiennoprzecinkowe oraz znak dzialania jakie chcesz wykonac" << endl;
	cin >> a >> b >> znak;
	if (znak == '+') {
		cout << "Wynik dodawania: " << a + b << endl;
	}
	else if (znak == '-') {
		cout << "Wynik odejmowania: " << a - b << endl;
	}
	else if (znak == '*') {
		cout << "Wynik mnozenia: " << a * b << endl;
	}
	else if (znak == '/') {
		if (b == 0) {
			cout << "Nie mozna dzielic przez 0" << endl;
		}
		else {
			cout << "Wynik dzielenia: " << a / b << endl;
		}
	}
}*/
//zad.5
	/*for (int i = 0; ; i++) {
		cout << i;
	}
	return 0;
}*/  //petla w nieskonczonosc wyswietla liczby 
	//while(true){    //do dokonczenia

//zad.6
	/*double a;
	double b;
	char znak;
	char zakoncz;
	while (true) {
		cout << "Podaj dwie liczby zmiennoprzecinkowe oraz znak dzialania jakie chcesz wykonac" << endl;
		cin >> a >> b >> znak;
		if (znak == '+') {
			cout << "Wynik dodawania: " << a + b << endl;
		}
		else if (znak == '-') {
			cout << "Wynik odejmowania: " << a - b << endl;
		}
		else if (znak == '*') {
			cout << "Wynik mnozenia: " << a * b << endl;
		}
		else if (znak == '/') {
			if (b == 0) {
				cout << "Nie mozna dzielic przez 0" << endl;
			}
			else {
				cout << "Wynik dzielenia: " << a / b << endl;
			}
		}
		cout << "Czy chcesz zakonczyc dzialanie petli (y/n)?" << endl; //y=yes, n=no
		cin >> zakoncz;
		if (zakoncz == 'y') {
			return 0;
		}
	}
}*/



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
