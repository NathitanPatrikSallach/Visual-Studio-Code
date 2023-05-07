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

int Bruch::zähler() const{
    return z;
}

int Bruch::nenner() const{
    return n;
}

double Bruch::reell() const{
    return (double)z / n;
}

Bruch Bruch::addiere(Bruch b)  const{
    return Bruch(z * b.nenner() + b.zähler() * n, n * b.nenner());
} 

Bruch Bruch::subtrahiere(Bruch b)  const{
    return Bruch(z * b.nenner() - b.zähler() * n, n * b.nenner());
} 

Bruch Bruch::algorithmus(int n) {
    if(n >= 2){
        Bruch temp(1,2);
            for(int i = 1; i <= n; i++){
                if(n % 2 == 0){
                    temp = temp.addiere(Bruch(1,i));
                } else {
                    temp = temp.subtrahiere(Bruch(1,i));
                }
            }
        return temp;
    } else {
        cout << "Für den Algorithums muss die Zahl Größer oder gleich 2 sein!" << endl;
    }
}