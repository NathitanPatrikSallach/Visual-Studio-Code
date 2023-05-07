#include "bruch.cpp"
#include <iostream>

using namespace std;

int main(){
    int an1 = 10;
    int an2 = 20;

    Bruch summe1(1,2);
    Bruch summe2(1,2);

    Bruch a(1, 2);
    Bruch b(3, 0);
    Bruch c(0, 5);

    summe1 = summe1.algorithmus(an1);
    summe2 = summe2.algorithmus(an2);

    cout << "a = " << a.zähler() << "/" << a.nenner() << " = " << a.reell() << endl;
    cout << "b = " << b.zähler() << "/" << b.nenner() << " = " << b.reell() << endl;
    cout << "c = " << c.zähler() << "/" << c.nenner() << " = " << c.reell() << endl;

    cout << "Summe von als gekürzten Bruch n: " << summe1.zähler() << "/" << summe1.nenner() << " = " << summe1.reell() << endl;
    cout << "Summe von als gekürzten Bruch n: " << summe2.zähler() << "/" << summe2.nenner() << " = " << summe2.reell() << endl;
    return 0;
}