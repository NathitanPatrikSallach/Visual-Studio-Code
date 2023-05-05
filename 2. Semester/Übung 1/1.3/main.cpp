#include "bruch.cpp"
#include <iostream>

using namespace std;

int main(){
    Bruch a(1, 2);
    Bruch b(3, 0);
    Bruch c(0, 5);

    cout << "a = " << a.Zähler() << "/" << a.Nenner() << " = " << a.reell() << endl;
    cout << "b = " << b.Zähler() << "/" << b.Nenner() << " = " << b.reell() << endl;
    cout << "c = " << c.Zähler() << "/" << c.Nenner() << " = " << c.reell() << endl;

    return 0;
}