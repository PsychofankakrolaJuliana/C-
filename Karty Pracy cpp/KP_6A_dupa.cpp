#include <iostream>
using namespace std;
bool czyPierwsza(int x) {
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}
int nwd(int a, int b) {
    if (a > b) {
        return nwd(a - b, b);
    }
    if (b > a) {
        return nwd(a, b - a);
    }
    return a;
}
int sumaDzielnikow(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            suma = suma + i;
        }
    }
    return suma;
}
int main()
{
    //Zad.1
    //int x;
    //int suma = 0;
    //cout << "Podaj liczbe: ";
    //cin >> x;
    //while (x > 0) {
    //    suma = suma + x % 10;
    //    x = x / 10;
    //}
    //cout << "Suma cyfr podanej liczby wynosi " << suma << ".";

    //Zad.2
    //int x;
    //cout << "Podaj liczbe: ";
    //cin >> x;
    //if (czyPierwsza(x) == true) {
    //    cout << "Podana liczba jest pierwsza.";
    //}
    //else {
    //    cout << "Podana liczba jest zlozona.";
    //}

//Zad.3
//int x;
//int suma = 0;
//cout << "Podaj liczbe: ";
//cin >> x;
//for (int i = 1; i < x; i++) {
//    if (x % i == 0) {
//        suma = suma + i;
//    }
//}
//if (suma == x) {
//    cout << "Podana liczba jest doskonala.";
//}
//else {
//    cout << "Podana liczba nie jest doskonala.";
//}

//Zad.4
//int a, b;
//cout << "Podaj liczbe: ";
//cin >> a;
//cout << "Podaj liczbe: ";
//cin >> b;
//if (nwd(a, b) == 1) {
//    cout << "Podane liczby sa wzglednie pierwsze.";
//}
//else {
//    cout << "Podane liczby nie sa wzglednie pierwsze.";
//}

//Zad.5
//int m;
//cout << "Podaj liczbe: ";
//cin >> m;
//for (int i = 10; i < 20; i++) {
//    if (nwd(m, i) == 1) {
//        cout << i << " ";
//    }
//}

//Zad.6
//int a, b;
//cout << "Podaj licznik: ";
//cin >> a;
//cout << "Podaj mianownik: ";
//cin >> b;
//int x = nwd(a, b);
//a = a / x;
//b = b / x;
//cout << a << "/" << b;

//Zad.7
//int a, b;
//cout << "Podaj licznik: ";
//cin >> a;
//cout << "Podaj mianownik: ";
//cin >> b;
//int c = a / b;
//int d = nwd(a, b);
//a = a - b * c;
//a = a / d;
//b = b / d;
//cout << d << " " << a << "/" << b;

//Zad.8
//int x, y;
//cout << "Podaj liczbe: ";
//cin >> x;
//cout << "Podaj liczbe: ";
//cin >> y;
//if (sumaDzielnikow(x) == y and sumaDzielnikow(y) == x) {
//    cout << "Som blizniacze.";
//}
//else {
//    cout << "Nie som.";
//}

//Zad.9
//for (int i = 1; i < 100; i++) {
//    for (int j = 1; j < 100; i++) {
//        if (czyPierwsza(i) == true and czyPierwsza(j)) {
//            int ilo = i * j;
//            if (ilo < 100 and ilo>9) {
//                cout << ilo << " ";
//            }
//        }
//    }
//}

//Zad.10
    //int x;
    //cout << "Podaj liczbe: ";
    //cin >> x;
    //cout << "\n\n";
    //if (czyPierwsza(x) == true) {
    //    int a = x + 2;
    //    int b = x + 2;
    //    if (czyPierwsza(a) == true) {
    //        cout << x << " " << a;
    //    }
    //    if (czyPierwsza(b) == true) {
    //        cout << x << " " << b;
    //    }
    //    else {
    //        cout << "Podana liczba nie jest pierwsza.";
    //    }
    //}
}
