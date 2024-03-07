#include <iostream>
using namespace std;
bool f(string n) {
    string n2;
    for (int i = n.length() - 1; i >= 0; i--) {
        n2 += n[i];
    }
    for (int i = 0; i < n.length(); i++) {
        if (n[i] != n2[i]) {
            return false;
        }
    }
    return true;
}
int main()
{
    string napis;
    cout << "Podaj napis: ";
    cin >> napis;
    if (f(napis) == true) {
        cout << "Podany wyraz jest palindoromem.";
    }
    else {
        cout << "Podany wyraz nie jest palindoromem.";
    }
}
