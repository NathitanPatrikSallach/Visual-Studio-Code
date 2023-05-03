#include "punkt.h"
#include <iostream>

using namespace std;

Punkt::Punkt(int x, int y){
    this -> x = x;
    this -> y = y;
}

int Punkt::getX() const {
    return x;
}

int Punkt::getY() const {
    return y;
}

void Punkt::move(int x, int y){
    this -> x += x;
    this -> y += y;
}

string Punkt::print() const {
    return "Die X-Koordinate ist " + this -> x + "\nDie Y-Koordinate" + this -> y + "\n"
}

