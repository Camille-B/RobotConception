#ifndef OBJET_H
#define OBJET_H

#include <iostream>


class Objet
{
    public:
        Objet(int p = 0): _poids(p) {};

        int poids(){return _poids;}
        void poids(int p){_poids = p;}

        friend std::ostream& operator<<(std::ostream&, Objet&);

    private:
        int _poids;
};

#endif // OBJET_H
