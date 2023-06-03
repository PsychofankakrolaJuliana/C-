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

    return 0;
}
