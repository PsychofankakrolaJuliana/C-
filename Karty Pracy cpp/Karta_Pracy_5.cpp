#include <iostream>
#include <math.h>
using namespace std;

//Zad.1
//bool czypie(int n) {
//    for (int i = 2; i < n; i++) {
//        if (n % i == 0) {
//            return false;
//        }
//        else {
//            return true;
//        }
//    }
//}
//void f1() {
//    int suma = 0;
//    for (int i = 10; i < 100; i++) {
//        if (czypie(i) == 0) {
//            suma = suma + i;
//        }
//    }
//    cout << suma;
//}

//Zad.2
//void f2() {
//    int suma = 0;
//    int x = pow(2, 2019);
//    while (x > 0) {
//        suma = suma + x % 10;
//        x = x / 10;
//    }
//    cout << suma;
//}

//Zad.4
//bool f4(int n, int d) {
//    if (n % d == 0) {
//        return true;
//    }
//    return false;
//}

//Zad.5
//void f5(int x) {
//    int suma = 0;
//    while (x > 0) {
//        suma = suma + x % 10;
//        x = x / 10;
//    }
//    cout << suma;
//}

int main()
{
    int x, y;
    cout << "Podaj liczbe: ";
    cin >> x;
    //cout << "Podaj liczbe: ";
    //cin >> y;

    //Odwołania do funkcji
    //1
    //f1();
    //2
    //f2();
    //3

    //4
    //cout << f4(x, y);
    //5
    //f5(x);
    //6
}
