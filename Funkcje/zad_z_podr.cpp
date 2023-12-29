#include <iostream>
#include <vector>
using namespace std;
//Zad.1 str.248
void z1(float x, float y, float z) {
	int a, b, c;
	if (x > y and x > z) {
		a = x;
		b = y;
		c = z;
	}
	else if (y > x and y > z) {
		a = y;
		b = x;
		c = z;
	}
	else {
		a = z;
		b = x;
		c = y;
	}
	if (a * a == b * b + c * c) {
		cout << "Podane wartosci utworza trojkat prostokatny.";
	}
	else {
		cout << "Podane wartosci nie tworza trojkata prostokatnego.";
	}
}

//Zad.2 str.248
int z2(float a, float b) {
	int dupa;
	cout << "1 - dodawanie\n2 - odejmowanie\n3 - mnozenie\n4 - dzielenie\n";
	cin >> dupa;
	switch (dupa) {
		case 1:
			return a + b;
		case 2:
			if (a > b) return a - b;
			else return b - a;
		case 3:
			return a * b;
		case 4:
			if (a > b) return a / b;
			else return b / a;
		default:
			return 0;
	}
}

//Zad.3 str.248
int z3(int a, int b, int c) {
	if (a * b > 100 * c) return a * 2;
	else return (a + b + c) / 3;
}

//Zad.4 str.249 - do dokonczenia
int numer_cwiartki(int a, int b) {
	if (a > 0 and b > 0) return 1;
	if (a < 0 and b > 0) return 2;
	if (a < 0 and b < 0) return 3;
	if (a > 0 and b < 0) return 4;
	if (a == 0 or b == 0) return 0;
}
void parzyste(int x, int y) {
	int k1 = x - y;
	int k2 = y - x;
	if (x < y) {
		vector<int> T(k2/2+1,0);
		int n = 0;
		for (int i = x; i <= y; i++) {
			if (i % 2) {
				T[n] = i;
				n++;
			}
		}
		int p = 0;
		for (int i = 0; i < k2 /2; i++) {
			if (T[i] < T[i + i]) {
				p = T[i];
				T[i] = T[i + 1];
				T[i + 1] = p;
			}
			cout << T[i] << " ";
		}
	}
	if (x > y) {
		vector<int> T(k1/2+1,0);
		int n = 0;
		for (int i = y; i <= x; i++) {
			if (i % 2 == 0) {
				T[n] = i;
				n++;
			}
		}
		int p = 0;
		for (int i = 0; i < k1 /2; i++) {
			if (T[i] < T[i + i]) {
				p = T[i];
				T[i] = T[i + 1];
				T[i + 1] = p;
			}
			cout << T[i] << " ";
		}
	}
}
float wyrazenie(int a, int b) {
	return 5 / (a - b + 2);
}

int main()
{
	//z1(2,1,12);
	//cout << z2(2, 3);
	
	//Zad.3 str.248
	//int a, b, c;
	//cout << "Podaj liczbe : ";
	//cin >> a;
	//cout << "Podaj liczbe : ";
	//cin >> b;
	//cout << "Podaj liczbe : ";
	//cin >> c;
	//cout << z3(a, b, c);

	//Zad.4 str.249
	//int x, y;
	//cout << "Podaj liczbe: ";
	//cin >> x;
	//cout << "Podaj liczbe: ";
	//cin >> y;
	//if (numer_cwiartki(x, y) == 1) {
	//	parzyste(x, y);
	//}
	//if (numer_cwiartki(x, y) == 2 or numer_cwiartki(x, y) == 4) {
	//	cout << wyrazenie(x, y);
	//}
	//if (numer_cwiartki(x, y) == 3 or numer_cwiartki(x, y) == 0) {
	//	cout << "Koniec programu";
	//}
}
