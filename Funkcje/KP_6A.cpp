#include <iostream>
using namespace std;

//Zad.1
//int f1(int n) {
//    int suma = 0;
//    while (n > 0) {
//        suma = suma + n % 10;
//        n = n / 10;
//    }
//    return suma;
//}

//Zad.2
//bool f2(int n) {
//    int f = 1;
//    for (int i = 2; i < n; i++) {
//        if (n % i == 0) {
//            f = 0;
//        }
//    }
//    if (f == 0) {
//        return false;
//    }
//    else {
//        return true;
//    }
//}

//Zad.3
//bool f3(int n) {
//    int suma = 0;
//    for (int i = 1; i < n; i++) {
//        if (n % i == 0) {
//            suma = suma + i;
//        }
//    }
//    if (suma == n) {
//        return true;
//    }
//    else {
//        return false;
//    }
//}

//Zad.4
//bool f4(int a, int b) {
//    while (a != b) {
//        if (a > b) {
//            a = a - b;
//        }
//        else{
//            b = b - a;
//        }
//    }
//    if (a == 1) {
//        return true;
//    }
//    else {
//        return false;
//    }
//}

//Zad.5
//bool f(int a, int b) {
//    while (a != b) {
//        if (a > b) {
//            a = a - b;
//        }
//        else{
//            b = b - a;
//        }
//    }
//    if (a == 1) {
//        return true;
//    }
//    else {
//        return false;
//    }
//}
//void f5(int n) {
//    for (int i = 10; i < 20; i++) {
//        if (f(i, n) == true) {
//            cout << i << " ";
//        }
//    }
//}

int main()
{
    int x, y;
    cout << "Podaj liczbe: ";
    cin >> x;
    cout << "Podaj liczbe: ";
    cin >> y;
    
    //Odwołania
    //1
    //cout << f1(x);
    //2
    //cout << f2(x);
    //3
    //cout << f3(x);
    //4
    //cout << f4(x, y);
    //5
    //f5(x);
}
