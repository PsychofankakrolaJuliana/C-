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

//Zad.6
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
//void f6(int a, int b) {
//    int n = a;
//    int m = b;
//    while (n != m) {
//        if (n > m) {
//            n = n - m;
//        }
//        else{
//            m = m - n;
//        }
//    }
//    a = a / n;
//    b = b / n;
//    cout << a << "/" << b;
//}

//Zad.7
//void f7(int a, int b) {
//    int c = a / b;
//    a = a - c * b;
//    int n = a;
//    int m = b;
//    while (n != m) {
//        if (n > m) {
//            n = n - m;
//        }
//        else{
//            m = m - n;
//        }
//    }
//    a = a / n;
//    b = b / n;
//    cout << c << " " << a << "/" << b;
//}

//Zad.8
//void f8() {
//    int sum1 = 0;
//    int sum2 = 0;
//    for (int i = 0; i < 10000; i++) {
//        for (int j = 1; j < i; j++) {
//            if (i % j == 0) {
//                sum1 = sum1 + j;
//            }
//            for (int a = 0; a < 10000; a++) {
//                for (int b = 1; b < a; b++) {
//                    if (a % b == 0) {
//                        sum2 = sum2 + b;
//                    }
//                }
//                if (sum1 == sum2) {
//                    cout << i << " " << a;
//                }
//            }
//        }
//    }
//}

//Zad.10
//bool f(int n) {
//    for (int i = 2; i < n; i++) {
//        if (n % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//void f10(int x) {
//    if (f(x) == 1) {
//        int y = x - 2;
//        int z = x + 2;
//        if (f(y) == 1) {
//            cout << y;
//        }
//        else if (f(z) == 1) {
//            cout << z;
//        }
//        else {
//            cout << "Podana liczba nie ma bliźniaka";
//        }
//    }
//    else {
//        cout << "Podana liczba nie jest pierwsza";
//    }
//}

int main()
{
    //int x, y;
    //cout << "Podaj liczbe: ";
    //cin >> x;
    //cout << "Podaj liczbe: ";
    //cin >> y;
    
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
    //6
    //f6(x, y);
    //7
    //f7(x, y);
    //8
    //f8();
    //10
    //f10(x);
}
