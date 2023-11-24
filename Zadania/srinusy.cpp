#include <iostream>
using namespace std;
int main()
{
    #include <iostream>
using namespace std;
bool CzyTrojkat(int a, int b, int c) {
    if (a + b > c or a + c > b or b + c > a) {
        return true;
    }
    return false;
}
int main()
{
    bool flaga = false;
    while (flaga == false) {
        int a, b, c, kat, n, sin, cos, tg, ctg;
        string pupa;
        cout << "Podaj przyprostokatne: ";
        cin >> a;
        cin >> b;
        cout << "Podaj przeciw prostokątna: ";
        cin >> c;
        if (CzyTrojkat(a, b, c) == true) {
            cout << "Podaj miare katu: ";
            cin >> kat;
            cout << "Podaj naprzeciw ktorego boku (dlugosc): ";
            cin >> n;
            int T[] = { a, b, c };
            if (a == n) {
                sin = a / c;
                cos = b / c;
                tg = a / b;
                ctg = b / a;
                cout << "Podaj co chcesz uzyskac: ";
                cin >> pupa;
                if (pupa == "sin") {
                    cout << sin;
                }
                else if (pupa == "cos") {
                    cout << cos;
                }
                else if (pupa == "tg") {
                    cout << tg;
                }
                else if (pupa == "ctg") {
                    cout << ctg;
                }
                else {
                    cout << "Podano niepoprawne slowo.";
                }
                flaga = true;
            }
            else if (b == n) {
                sin = b / c;
                cos = a / c;
                tg = b / a;
                ctg = a / b;
                cout << "Podaj co chcesz uzyskac: ";
                cin >> pupa;
                if (pupa == "sin") {
                    cout << sin;
                }
                else if (pupa == "cos") {
                    cout << cos;
                }
                else if (pupa == "tg") {
                    cout << tg;
                }
                else if (pupa == "ctg") {
                    cout << ctg;
                }
                else {
                    cout << "Podano niepoprawne slowo.";
                }
                flaga = true;
            }
            else {
                cout << "Podana dlugosc nie odpowiada miarze zadnej z przyprostokatnych.";
                flaga = true;
            }
        }
        else {
            cout << "Podane dlugosci nie tworza trojkata.";
        }
    }
}
}
