#include <iostream>
#include <math.h>
using namespace std;
 
//Zad.1
//suma kwadratow liczb
//int f11(int x, int y) {
//    return x * x + y + y;
//}

//trojkat rownoboczny pole
//int f12(int a) {
//    return (pow(a, 2) * 2) / 4;
//}

//podzielność liczby przez drugą
//bool f13(int x, int y) {
//    if (x % y == 0) {
//        return true;
//    }
//    return false;
//}

//Zad.2
//int f2(int x) {
//    int suma = 0;
//    int temp = 0;
//    while (x > 0) {
//        temp = x % 10;
//        suma = suma + temp;
//        x = x / 10;
//    }
//    return suma;
//}

//Zad.3
//int f2(int n) {
//    if (n == 0) {
//        return 1;
//        cout << " ";
//    }
//    else {
//        return n * (f2(n - 1));
//        cout << " ";
//    }
//}

//Zad.4
//int f4(int n) {
//    int a = 0;
//    int b = 1;
//    for (int i = 0; i < n; i++) {
//        b = b + a;
//        a = b;
//    }
//    return b;
//}

//Zad.5
//int f5(int n) {
//    int a = 0;
//    int b = 1;
//    cout << a, b;
//    for (int i = 0; i < n; i++) {
//        b = b + a;
//        a = b;
//        cout << " " << b;
//    }
//    return 0;
//}

//Zad.6
//int f6(int n, int x) {
//    if (n == 0) {
//        return 1;
//    }
//    else{
//        return pow(n, x);
//    }
//}

//Zad.7
//void f7(int n) {
//    if (n > 1) {
//        f7(n / 2);
//    }
//    cout << n % 2;
//}


int main()
{
    //int x, y;
    //cout << "Podaj liczbe: ";
    //cin >> x;
    //cout << "Podaj liczbe: ";
    //cin >> y;
    
    //Odwołania do funkcji
    //1
    //cout << f11(x, y);
    //cout << f12(x);
    //cout << f13(x, y);
    //2
    //cout << f2(x);
    //3
    //cout << f2(x);
    //4
    //cout << f4(x);
    //5
    //cout << f5(x);
    //6
    //cout << f6(x, y);
    //7
    //f7(x);
}
