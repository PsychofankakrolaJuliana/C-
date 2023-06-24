#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool f(int n) {
	if (n % 2 == 0) {
		return true;
	}
	return false;
}
int main()
{
	// 1 ZESTAW ZADAN

	//Zad.1 
	//Napisz program, który wczytuje liczbę całkowitą od użytkownika i wyświetla jej kwadrat.
	//double n;
	//cout << "Podaj liczbe: ";
	//cin >> n;
	//n = pow(n, 2);
	//cout << n;

	//Zad.2
	//Stwórz program, który wczytuje długość boku kwadratu od użytkownika i oblicza jego pole i obwód.
	//int pole, obw, a;
	//cout << "Podaj dlugosc boku: ";
	//cin >> a;
	//pole = a * a;
	//obw = a * 4;
	//cout << "Pole: " << pole << "\n";
	//cout << "Obwod: " << obw << "\n";

	//Zad.3
	//Napisz program, który sprawdza, czy podana liczba jest parzysta czy nieparzysta.
	//int n;
	//cout << "Podaj n: ";
	//cin >> n;
	//cout << f(n);

	//Zad.4
	//Stwórz prosty kalkulator, który wczytuje dwie liczby od użytkownika i wykonuje na nich podstawowe operacje 
	//arytmetyczne (dodawanie, odejmowanie, mnożenie, dzielenie).
	//int a, b, c, wynik;
	//cout << "Podaj liczbe: ";
	//cin >> a;
	//cout << "Podaj liczbe: ";
	//cin >> b;
	//cout << "1 - dodawanie\n2 - odejmowanie\n3 - mnozenie\n4 - dzielenie calkowite\n";
	//cin >> c;
	//if (c == 1) {
	//	wynik = a + b;
	//	cout << wynik;
	//}
	//else if (c == 2) {
	//	wynik = a - b;
	//}
	//else if (c == 3) {
	//	wynik = a * b;
	//}
	//else if (c == 4) {
	//	wynik = a / b;
	//}
	//else {
	//	cout << "Nie ta liczba idioto";
	//}

	//Zad.5
	//Napisz program, który generuje losową liczbę od 1 do 100 i prosi użytkownika o zgadnięcie tej liczby. Program 
	//powinien udzielać wskazówek, czy podana liczba jest za duża, za mała lub równa szukanej liczbie.
	//srand(time(0));
	//int x = rand() % 100 + 1;
	//int n = 0;
	//int np;
	//while (n != x) {
	//	cout << "Podaj liczbe: ";
	//	cin >> np;
	//	n = np;
	//	if (n > x) {
	//		cout << "Za duza.\n";
	//	}
	//	else if (n < x) {
	//		cout << "Za mala.\n";
	//	}
	//	else {
	//		cout << "Tak.\n";
	//	}
	//}
}
