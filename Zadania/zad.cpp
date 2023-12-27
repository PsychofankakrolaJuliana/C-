#include <iostream>
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
int main()
{
	//z1(2,1,12);
	//cout << z2(2, 3);
}
