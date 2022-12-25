#include <iostream>
using namespace std;
int main()
{
	//Zad.1
	int i = 0;
	while (i != 0) {
		i++;
		i = i ^ 3 + 3;
		cout << i;

	}
}
