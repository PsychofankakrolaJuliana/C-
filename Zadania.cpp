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


	//ZADNIA Z KSIAZKI
	
	//Tablice
	
	//Zad.1
	//srand(time(0));
	//int T[8];
	//int suma = 0;
	//for (int c = 0; c < 8; c++) {
	//	T[c] = rand() % 10 + 0;
	//}
	//for (int i = 0; i < 8; i++) {
	//	suma = suma + T[i];
	//}
	//int x = suma = suma / 8;
	//cout << x << "\n";
	//if (x > 5) {
	//	cout << "Wieksza od 5.";
	//}
	//else if (x == 5) {
	//	cout << "Rowna 5.";
	//}
	//else {
	//	cout << "Mniejsza od 5.";
	//}

	//Zad.2
	//srand(time(0));
	//int T[10];
	//for (int i = 0; i < 10; i++) {
	//	T[i] = rand() % 500 + 1;
	//	if (T[i] % 2 == 0 and T[i] % 3 == 0) {
	//		cout << T[i] << " ";
	//	}
	//}

	//Zad.3
	//srand(time(0));
	//int T[50];
	//int ilo = 0;
	//for (int i = 0; i < 50; i++) {
	//	T[i] = rand() % 50 + 1;
	//	if (T[i] % 2 == 0) {
	//		cout << T[i] << " ";
	//		ilo++;
	//	}
	//}
	//cout << "\n";
	//cout << ilo;

	//Zad.4
	//srand(time(0));
	//int T[80];
	//int suma = 0;
	//int ilo = 0;
	//for (int i = 0; i < 80; i++) {
	//	T[i] = rand() % 80 + 1;
	//	if (T[i] >= 10 && T[i] <= 50) {
	//		cout << T[i] << " ";
	//		suma = suma + T[i];
	//		ilo++;
	//	}
	//}
	//cout << "\n";
	//cout << suma / ilo;
	
	//Zad.5
	//int T[50];
	//srand(time(0));
	//for (int i = 0; i < 50; i++) {
	//	T[i] = rand() % 100 + 1;
	//	for (float j = 0; j < 10; j++) {
	//		if (pow(j, 2) == i) {
	//			cout << T[i] << " ";
	//		}
	//	}
	//}

	//Zad.7
	//srand(time(0));
	//int T[30];
	//for (int i = 0; i < 30; i++) {
	//	T[i] = rand() % 100 + 50;
	//	cout << T[i] << " , ";
	//}
	//cout << "\n";
	//for (int j = 0; j < 30; j++) {
	//	if (j % 2 == 0) {
	//		T[j] = 0;
	//	}
	//	cout << T[j] << " , ";
	//}

	//Zad.8
	//srand(time(0));
	//int T[10];
	//for (int i = 0; i < 10; i++) {
	//	T[i] = rand();
	//	cout << T[i] << " ";
	//}
	//cout << "\n";
	//int suma = 0;
	//int x;
	//for (int i = 0; i < 10; i++) {
	//	x = pow(T[i], 2);
	//	if (x % 4 == 2 || x < 0) {
	//		suma = suma + x;
	//	}
	//}
	//cout << suma;

	//Zad.9
	//int T[10];
	//bool a = true;
	//bool b = true;
	//for (int j = 0; j < 10; j++) {
	//	T[j] = rand();
	//}
	//for (int i = 3; i < 10; i++) {
	//	if (T[i] != T[i - 1] + T[i - 2]) {
	//		a = false;
	//	}
	//	if ((T[i] < 0 and T[i - 1] >= 0 and T[i - 2] < 0) or (T[i] >= 0 and T[i - 1] < 0 and T[i - 2] >= 0)) {
	//		b = false;
	//	}
	//}
	//if (a == true) {
	//	cout << "Ciag jest arytmetyczy.";
	//}
	//else if (b == true) {
	//	cout << "Ciag jest naprzemienny";
	//}
	//else{
	//	cout << "Ciag nie jest ani art ani nap.";
	//}
}
