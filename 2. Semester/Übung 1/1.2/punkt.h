#ifndef PUNKT_H_
#define PUNKT_H_
#include <string>

using namespace std;

class Punkt{
    private:
        int x;
        int y;
    public:
        Punkt(int x, int y);
        int getX() const;
        int getY() const;
        void move(int x, int y);
        string print() const;
};
#endif