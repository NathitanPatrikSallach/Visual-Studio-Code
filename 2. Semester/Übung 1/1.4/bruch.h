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
            int zähler() const;
            int nenner() const;
            double reell() const;
            Bruch addiere(Bruch b) const;
            Bruch subtrahiere(Bruch b) const;
            Bruch algorithmus(int n);
   };
#endif