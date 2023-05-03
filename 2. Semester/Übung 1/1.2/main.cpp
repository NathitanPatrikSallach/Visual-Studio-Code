#include <iostream>
#include "punkt.cpp"

using namespace std;

int main() {
    Punkt p1(1,2);
    Punkt* p2 = new Punkt(3,4);

    p1.move(1,-2);
    p2->move(4,-5);

    cout << p1.print() << endl;
    cout << p2->print() << endl;

    delete p2;

    return 0;
}
