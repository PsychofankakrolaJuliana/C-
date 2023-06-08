#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    const int l = 40;
    int T[l];
    srand(time(0));
    for (int i = 0; i < l; i++) {
        T[i] = rand() % 90 + 10;
    }
    for (int i = 0; i < l; i++) {
        cout << T[i] << " ";
    }
 
    //Zad.1
    //int maks = 0;
    //for (int i = 0; i < l; i++) {
    //    if (T[i] > maks) {
    //        maks = T[i];
    //    }
    //}
    //cout << maks;
    
    //Zad.2
    //int min = 100;
    //for (int i = 0; i < l; i++) {
    //    if (T[i] < min) {
    //        min = T[i];
    //    }
    //}
    //cout << min;
    
    //Zad.3
    //int maks = 0;
    //for (int i = 0; i < l; i++) {
    //    if (T[i] > maks) {
    //        maks = T[i];
    //    }
    //}
    //int min = 100;
    //for (int i = 0; i < l; i++) {
    //    if (T[i] < min) {
    //        min = T[i];
    //    }
    //}
    //int sr = maks - min;
    //cout << sr;
    
    //Zad.4
    //int maks = 0;
    //int maks2 = 0;
    //int L[39];
    //int x = 0;
    //for (int i = 0; i < l; i++) {
    //    if (T[i] > maks) {
    //        maks = T[i];
    //    }
    //}
    //for (int j = 0; j < l; j++) {
    //    if (T[j] != maks) {
    //        L[x] = T[j];
    //        x++;
    //    }
    //}
    //for (int i = 0; i < 39; i++) {
    //    if (L[i] > maks2) {
    //        maks2 = L[i];
    //    }
    //}
    //cout << maks2;
    
    //Zad.5
    //int min = 100;
    //for (int i = 0; i < l; i++) {
    //    if (T[i] < min) {
    //        min = T[i];
    //    }
    //}
    //int min2 = 100;
    //int L[39];
    //int x = 0;
    //for (int j = 0; j < l; j++) {
    //    if (T[j] != min) {
    //        L[x] = T[j];
    //        x++;
    //    }
    //}
    //for (int i = 0; i < 39; i++) {
    //    if (L[i] < min2) {
    //        min2 = L[i];
    //    }
    //}
    //cout << min2;
    
    //Zad.6
    //int maks = 0;
    //for (int i = 0; i < l; i++) {
    //    if (T[i] > maks) {
    //        maks = T[i];
    //    }
    //}
    //int ilo = 0;
    //for (int i = 0; i < l; i++) {
    //    if (T[i] == maks) {
    //        ilo++;
    //    }
    //}
    //cout << ilo;
    
    //Zad.7
    //int min = 100;
    //for (int i = 0; i < l; i++) {
    //    if (T[i] < min) {
    //        min = T[i];
    //    }
    //}
    //int ilo = 0;
    //for (int j = 0; j < l; j++) {
    //    if (T[j] == min) {
    //        ilo++;
    //    }
    //}
    //cout << ilo;
    
    //Zad.8
    //int n;
    //cout << "Podaj liczbe: ";
    //cin >> n;
    //int ilo = 0;
    //for (int i = 0; i < l; i++) {
    //    if (T[i] == n) {
    //        ilo++;
    //    }
    //}
    //cout << ilo;
    
    //Zad.9
    //double sr = 0;
    //double x = 40;
    //for (int i = 0; i < l; i++) {
    //    sr = sr + T[i];
    //}
    //sr = sr / x;
    //cout << sr;
    
    //Zad.10
    //int suma = 0;
    //for (int i = 0; i < l; i = i + 2) {
    //    suma = suma + T[i];
    //}
    //cout << suma;
    
    //Zad.11
    //int sr = 0;
    //int x = 0;
    //for (int i = 1; i < l; i = i + 2) {
    //    sr = sr + T[i];
    //    x++;
    //}
    //sr = sr / x;
    //cout << sr;
    
    //Zad.12
    //int ilo = 0;
    //int ilo2 = 0;
    //for (int i = 0; i < l; i++) {
    //    for (int j = 0; j < l; j++) {
    //        if (T[i] = T[j]) {
    //            ilo++;
    //        }
    //    }
    //    if (ilo < 2) {
    //        ilo2++;
    //    }
    //    ilo = 0;
    //}
    //cout << ilo2;

    //Zad.13
    //bool f = true;
    //for (int i = 10; i < 100; i++) {
    //    for (int j = 0; j < l; j++) {
    //        if (i == T[j]) {
    //            f = false;
    //        }
    //    }
    //    if (f = true) {
    //        cout << i << " ";
    //    }
    //    f = true;
    //}
    
    //Zad.4
    //int ilo = 0;
    //int x = 0;
    //for (int i = 0; i < l; i++) {
    //    for (int j = 0; j < l; j++) {
    //        if (T[i] == T[j]) {
    //            x = x + 1;
    //        }
    //    }
    //    if (x > 1) {
    //        ilo = ilo + (x - 1);
    //    }
    //    x = 0;
    //}
    //cout << ilo;
    
    //Zad.15
    //int L [40];
    //int x = 0;
    //int temp = 0;
    //int iold = 0;
    //int max = 0;
    //for (int i = 1; i < l; i++) {
    //    iold = i - 1;
    //    if (iold <= i) {
    //        x == x + 1;
    //        if (x > temp) {
    //            temp = x;
    //            L[i] = temp;
    //        }
    //    }
    //}
    //for (int j = 0; j < l; j++) {
    //    if (T[j] == temp) {
    //        cout << j << " i " << temp;
    //    }
    //}

    return 0;
}
