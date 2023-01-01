#include <iostream>
using namespace std;
int main()
{
    //Zad.1
    //int a, b, c;
    //cout << "Podaj a: ";
    //cin >> a;
    //cout << "Podaj b: ";
    //cin >> b;
    //cout << "Podaj c: ";
    //cin >> c;
    //int x = c - b;
    //int y = b - a;
    //if (x == y) {
    //    cout << "Ciag jest arytmetyczny" << endl;
    //}
    //else {
    //    cout << "Ciag nie jest arytmetyczny" << endl;
    //}
    //float d = c / b;
    //float e = b / a;
    //if (d == e) {
    //    cout << "Ciag jest geometryczny" << endl;
    //}
    //else {
    //    cout << "Ciag nie jest geometryczny" << endl;
    //}
    //if (a < b < c) {
    //    cout << "Podany ciag jest rosnacy" << endl;
    //}
    //else if (a > b > c) {
    //    cout << "Podany ciag jest malejacy" << endl;
    //}
    //Zad.2
    //int suma = 0;
    //for (int i = 100; i < 1000; i++) {
    //    if (i % 8 == 0 && i % 16 != 0) {
    //        suma = suma + i;
    //    }
    //}
    //cout << suma;
    //Zad.3
    //int ilo = 0;
    //int x = 0;
    //for (int i = 10; i < 100; i++) {
    //    if (i % 7 == 0) {
    //        x = i;
    //    }
    //}
    //for (int j = 1000; j < 10000; j++) {
    //    if (j % x == 0) {
    //        ilo = ilo + 1;
    //    }
    //}
    //cout << ilo;
    //Zad.4
    //int x = 0;
    //int y = 0;
    //int ilo = 0;
    //for (int c = 10; c < 100; c++) {
    //    x = c % 10;
    //    y = c % 100;
    //    if (y >= x*2) {
    //        ilo = ilo + 1;
    //    }
    //}
    //cout << ilo;
    //Zad.5
    //int suma = 0;
    //int ilo = 0;
    //int a;
    //int b;
    //int c;
    //for (int i = 100; i < 1000; i++) {
    //    a = i % 10;
    //    b = i % 100;
    //    c = i % 1000;
    //    if (c > a + b) {
    //        suma = suma + i;
    //        ilo = ilo + 1;
    //    }
    //}
    //cout << suma << " i " << ilo;
    //Zad.6
    //int n;
    //int suma = 0;
    //cout << "Podaj n: ";
    //cin >> n;
    //for (int i = 10; i < 19 + n * 19; i++) {
    //    if (i % 19 == 0) {
    //        suma = suma + i;
    //    }
    //}
    //cout << suma;
    //Zad.7
    //int n;
    //int suma = 0;
    //cout << "Podaj n: ";
    //cin >> n;
    //for (int i = 1000; i > 1000 - n * 37; i--) {
    //    if (i % 37 == 0) {
    //        suma = suma + i;
    //    }
    //}
    //cout << suma;
    //Zad.8
    //int n;
    //int suma = 0;
    //cout << "Podaj n: ";
    //cin >> n;
    //for (int i = 2; i <= 2 + n; i++) {
    //    if (i % 2 == 0) {
    //        suma = suma + i;
    //    }
    //    else {
    //        suma = suma - i;
    //    }
    //}
    //cout << suma;
    //Zad.9
    //int ilo = 1;
    //int n;
    //int x;
    //cout << "Podaj liczbe: ";
    //cin >> n;
    //for (int i = 0; i < n; i++) {
    //    if (i % 2 == 1) {
    //        x = 2 ^ i;
    //        ilo = ilo * x;
    //    }
    //    else {
    //        x = 2 ^ i * (-1);
    //        ilo = ilo * x;
    //    }
    //}
    //cout << ilo;
        //Zad.11
    //int n;
    //int licznik = 0;
    //int mianownik = 0;
    //cout << "Podaj n: ";
    //cin >> n;
    //int l = -1;
    //int iold = 0;
    //int lold = 0;
    //int a = 0;
    //int b = 0;
    //int c = 0;
    //for (int i = 1; i <= n; i++) {
    //    i = i * i;
    //    l = l + 2;
    //    if (iold != 0) {
    //        a = iold;
    //        b = i;
    //        while (a != b) {
    //            c = a * b;
    //        }
    //        while (a != b) {
    //            if (a > b) {
    //                a = a - b;
    //                c = c / a;
    //            }
    //            else {
    //                b = b - a;
    //                c = c / b;
    //            }
    //        }
    //    }
    //    i = i * c;
    //    l = l * c;
    //    iold = iold * c;
    //    lold = lold * c;
    //    mianownik = i + iold;
    //    licznik = l + lold;
    //    iold = i;
    //    lold = l;
    //}
    //cout << licznik << "/" << mianownik;
}
