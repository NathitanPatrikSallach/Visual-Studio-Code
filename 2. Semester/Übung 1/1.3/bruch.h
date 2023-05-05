#ifndef BRUCH_H_
#define BRUCH_H_

    class Bruch{
        private:
            int z;
            int n;
            void kuerzen();
            int ggt(int z, int n) const;
        public:
            Bruch(int z, int n);
            int Zähler() const;
            int Nenner() const;
            double reell() const;
            Bruch addiere(Bruch b) const;
    };
#endif