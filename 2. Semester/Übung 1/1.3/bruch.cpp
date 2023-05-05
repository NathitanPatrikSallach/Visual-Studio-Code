#include "bruch.h"
#include <iostream>

using namespace std;

Bruch::Bruch(int z, int n){
    if(n == 0){
        cout << "Fehler: Nenner darf nicht 0 sein, setze Nenner auf 1" << endl;
        n = 1;
    }
    this -> z = z;
    this -> n = n;
    if(z != 0){
        kuerzen();
    }
}

void Bruch::kuerzen(){
    n /= ggt(this -> n, this ->  z);
    z /= ggt(this -> n, this ->  z);
}

int Bruch::ggt(int z, int n) const{
    while(n != 0){
        int temp = n;
        n = z % n;
        z = temp;
    }
    return z;
}

int Bruch::Zähler() const{
    return z;
}

int Bruch::Nenner() const{
    return n;
}

double Bruch::reell() const{
    return (double)z / n;
}

Bruch Bruch::addiere(Bruch b)  const{
    return Bruch(z * b.Nenner() + b.Zähler() * n, n * b.Nenner());
} 
