#ifdef PUNKT_H_
#define PUNKT_H_

#include <string>

class Punkt{
    private:
        int x;
        int y;
    public:
        Punkt(int x, int y);
        int getX() const;
        int getY() const;
        string print() const;
        void move(int x, int y);
};
#endif