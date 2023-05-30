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

    return 0;
}
