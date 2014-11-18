#ifndef FIGE_H
#define FIGE_H

#include <EtatRobot.h>


class Fige : public EtatRobot
{
    public:
        virtual EtatRobot* repartir();

        virtual std::string nom_etat() const {return "Fige";}

        static Fige* instance(EtatRobot* etat_precedent);

    private:
        Fige(EtatRobot* dernier_etat = EtatRobot::instanceInit()) : EtatRobot(), _etat_precedent(dernier_etat) {};
        EtatRobot* _etat_precedent;
        static Fige* _instance;


};

#endif // FIGE_H
