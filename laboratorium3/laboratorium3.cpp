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
/*int i = 0;
while (true) {
	cout << i;
	i++;
}
}*/ //petla nieskonczona wyswietlajaca liczby 0+1, 1+1.. i tak w nieskonczonosc

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
//zad.7
/*int i = 0;
while (true) {
	if (i == 200) {
		break;
	}
	if (i % 2 != 0) {
		cout << i << endl;
	}
	i++;
	 }
}*/
//zad.8
/*#include <math.h>
using namespace std;
int main(){
int n;
cout << "Podaj liczbe naturalna n: " << endl;
cin >> n;*/  //do dokonczenia
//zad.9
	/*int a;
	cout << "Podaj temperature:" << endl;
	cin >> a;
	if (a < 0) {
		cout << "Mroz" << endl;
	}
	else if (a >= 0 && a < 10)
	{
		cout << "Zimno" << endl;
	}
	else if (a >= 10 && a < 20) {
		cout << "Umiarkowanie" << endl;
	}
	else if (a >= 20 && a < 30) {
		cout << "Cieplo" << endl;
	}
	else {
		cout << "Goraco" << endl;
	} return 0;
}*/
//zad.10
	/*int a;
	int b;
	int c;
	cout << "Podaj 3 liczby calkowite" << endl;
	cin >> a >> b >> c;
	if (a > b && a > c) {
		cout << a << endl;
	}
	else if (b > a && b > c) {
		cout << b << endl;
	}
	else if (c > a && c > b) {
		cout << c << endl;
	}
	else {
		cout << a << endl;
	}
	return 0;
}*/
//zad.11
	/*nt a;
	cout << "Podaj rok kalendarzowy" << endl;
	cin >> a;
	if (a % 4 == 0 && a%100 !=0 && a%400 != 0) {
		cout << "Rok " << a << " jest przestepny" << endl;
	}
	else if (a % 100 == 0 && a % 4 == 0 && a % 400 != 0) {
		cout << "Rok " << a << " nie jest przestepny" << endl;
	}
	else if (a % 4 == 0 && a % 100 == 0 && a % 400 == 0) {
		cout << "Rok " << a << " jest przestepny" << endl;
	}
	else {
		cout << "Rok " << a << " nie jest przestepny" << endl;
	}
	return 0;
}*/
//zad.12
	/*int a;
	cout << "Podaj komunikat:" << endl;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Start" << endl;
		break;
	case 2:
		cout << "Ustawienia" << endl;
		break;
	case 3:
		cout << "Pomoc" << endl;
		break;
	case 4:
		cout << "Koniec" << endl;
		break;
	default:
		cout << "Podano liczbe inna niz 1,2,3 lub 4" << endl;
	} return 0;
}*/
//zad.13
	/*int a;
	cout << "Podaj liczbe a" << endl;
	cin >> a;
	switch (a) {
	case 1:
		cout << " - niedostateczny";
		break;
	case 2:
		cout << " - dopuszczajacy";
		break;
	case 3:
		cout << " - dostateczny";
		break;
	case 4:
		cout << " - dobry";
		break;
	case 5:
		cout << " - bardzo dobry";
		break;
	default:
		cout << "Podano nieprawidlowa liczbe"<<endl;
	} return 0;
}*/
//zad.14
/*int suma = 0;
for (int x=0; x <= 100; x++) {
	if (x % 3 == 0)
		continue;
	suma += x;
}
		cout << "Suma: " << suma << endl;
}*/






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the projec//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file]
