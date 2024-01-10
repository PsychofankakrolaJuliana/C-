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

}
