#include <iostream>
using namespace std;
//Zad.1
//void f1(int a, int b, int c) {
//    if (c - b == b - a or a - b == b - c) {
//        cout << "Ciag jest arytmetyczny\n";
//    }
//    else if (b / a == c / b or a / b == b / c) {
//        cout << "Ciag jest gometryczny\n";
//    }
//    else {
//        cout << "To nie jest ciag.\n";
//    }
//    if (a < b < c) {
//        cout << "Ciag jest rosnacy\n";
//    }
//    else if (a > b > c) {
//        cout << "Ciag jest malejacy\n";
//    }
//    else {
//        cout << "Ten ciag jest nijakim debilem\n";
//    }
//}

//Zad.2
//void f2() {
//    for (int i = 100; i < 1000; i++) {
//        if (i % 8 == 0 and i % 16 != 0) {
//            cout << i << " ";
//        }
//    }
//}

//Zad.3
//void f3() {
//    int x;
//    int ilo = 0;
//    for (int i = 100; i >= 50; i--) {
//        if (i % 7 == 0) {
//            x = i;
//            break;
//        }
//    }
//    for (int j = 1000; j < 10000; j++) {
//        if (j % x == 0) {
//            ilo++;
//        }
//    }
//    cout << ilo;
//}

//Zad.4
//int f4() {
//    int a, b;
//    int ilo = 0;
//    for (int i = 10; i < 100; i++) {
//        a = i % 10;
//        b = i % 100;
//        if (b >= 2 * a) {
//            ilo++;
//        }
//    }
//    return ilo;
//}

//Zad.5
//void f5() {
//    int suma = 0;
//    int ilo = 0;
//    int a, b, c;
//    for (int i = 100; i < 1000; i++) {
//        a = i % 10;
//        b = i % 100;
//        c = i % 1000;
//        if (c > a + b) {
//            ilo++;
//            suma = suma + i;
//        }
//    }
//    cout << ilo << " i " << suma;
//}

//Zad.6
//void f6(int n) {
//    int suma = 0;
//    for (int i = 19; i < 19 + n * 19; i=i+19) {
//        suma = suma + i;
//    }
//    cout << suma;
//}

//Zad.7
//void f7(int n) {
//    int x;
//    int suma = 0;
//    for (int j = 999; j > 150; j--) {
//        if (j % 37 == 0) {
//            x = j;
//            break;
//        }
//    }
//    for (int i = 999; i > x - n * 37; i = i - 37) {
//        suma = suma + i;
//    }
//    cout << suma;
//}

//Zad.8
//void f8(int n) {
//    int suma = 0;
//    int x = 2;
//    for (int i = 0; i < n; i++) {
//        if (i % 2 == 0) {
//            suma = suma + x;
//        }
//        else {
//            suma = suma - x;
//        }
//        x = x + 3;
//    }
//    cout << suma;
//}

//Zad.9
//void f9(int n) {
//    int ilo = 1;
//    int x = 1;
//    for (int i = 0; i < n; i++) {
//        if (i % 2 == 0) {
//            ilo = ilo * x;
//        }
//        else {
//            ilo = ilo * x * (-1);
//        }
//        x = x * 2;
//    }
//    cout << ilo;
//}

//Zad.10
//void f10(int n) {
//    int suma = 0;
//    int ilo = 1;
//    for (int i = 1; i < n; i++) {
//        for (int j = 1; j < i; j++) {
//            ilo = ilo * j;
//        }
//        suma = suma + ilo;
//    }
//    cout << suma;
//}

//Zad.11
//void f11(int n) {
//    int l = 0;
//    int m = 0;
//    for (int i = 1; i < n * 2; i = i + 2) {
//        l = l + i;
//    }
//    for (int j = 1; j = n; j++) {
//        m = m + j * j;
//    }
//    cout << l << "/" << m;
//}

//Zad.12
//void f12(int n) {
//    int l = 0;
//    int m = 0;
//    for (int i = 1; i <= n * 2; i = i + 2) {
//        l = l + i;
//    }
//    for (int j = 1; j <= n; j++) {
//        m = m + j * j;
//    }
//    cout << l / m;
//}

//Zad.13
//void f13(int n) {
//    int l = 0;
//    int m = 0;
//    for (int i = 2; i <= n * 2; i = i + 2) {
//        l = l + i;
//    }
//    for (int j = 1; j <= n; j = j * j * j + 2) {
//        m = m + j;
//    }
//    cout << l << "/" << m;
//}

//Zad.14
//void f14(int n) {
//    int l = 0;
//    int m = 0;
//    for (int i = 2; i <= n * 2; i = i + 2) {
//        l = l + i;
//    }
//    for (int j = 1; j <= n; j = j * j * j + 2) {
//        m = m + j;
//    }
//    cout << l << "/" << m;
//}

int main()
{
    int x, y, z;
    cout << "Podaj liczbe: ";
    cin >> x;
    //cout << "Podaj liczbe: ";
    //cin >> y;
    //cout << "Podaj liczbe: ";
    //cin >> z;

    //Odwołania
    //1
    //f1(x, y, x);
    //2
    //f2();
    //3
    //f3();
    //4
    //cout << f4();
    //5
    //f5();
    //6
    //f6(x);
    //7
    //f7(x);
    //8
    //f8(x);
    //9
    //f9(x);
    //10
    //f10(x);
    //11
    //f11(x);
    //12
    //f12(x);
    //13
    //f13(x);
    //14
    //f14(x);
}
