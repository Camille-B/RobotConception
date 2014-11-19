#ifndef FIGE_H
#define FIGE_H

#include <EtatRobot.h>


class Fige : public EtatRobot
{
    public:
        virtual EtatRobot* repartir();
        virtual std::string nom_etat() const {return "Fige";}

        static Fige* instance(EtatRobot* etat_precedent);

        EtatRobot* etat_precedent(){return _etat_precedent;}
        void etat_precedent(EtatRobot* e){_etat_precedent = e;};

    private:
        Fige() : EtatRobot(){};
        EtatRobot* _etat_precedent = 0;
        static Fige* _instance;



};

#endif // FIGE_H
