#include "punkt.h"

Punkt::Punkt(int x, int y){
    this -> x = x;
    this -> y = y;
}

int Punkt::getX() const{
    return x;
}

int Punkt::getY() const{
    return y;
}

void Punkt::move(int x, int y){
    this -> x += x;
    this -> y += y;
}

string Punkt::print() const{
    return "Die Koordinate X ist: " + to_string(this -> x) + "\nDie Koordinate Y ist: " + to_string(this -> y) + "\n";
}