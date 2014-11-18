#ifndef OBJET_H
#define OBJET_H


class Objet
{
    public:
        Objet(int p = 0): _poids(p) {};

        int poids(){return _poids;}
        void poids(int p){_poids = p;}

    private:
        int _poids;
};

#endif // OBJET_H
