#include <iostream>
using namespace std;
int main()
{
    //Zad.1
    // suma kwadratow liczb
    int a, b;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    float suma(float x, float y)
    {
        return x * x + y * y;
    }
    suma(a, b);
}
