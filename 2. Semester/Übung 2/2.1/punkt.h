#ifndef PUNKT_H_
#define PUNKT_H_

#include <iostream>

    class Punkt{
        private:
            int x,y;
        public:
            Punkt(int x, int y);
            int getX() const;
            int getY() const;
            void bewegen();
            std::string drucken();
    };

#endif