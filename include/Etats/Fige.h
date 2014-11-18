#ifndef FIGE_H
#define FIGE_H

#include <EtatRobot.h>


class Fige : public EtatRobot
{
    public:
        virtual EtatRobot* repartir();

        virtual std::string nom_etat() const {return "Fige";}

        static Fige* instance();

    private:
        Fige(std::string dernier_etat = "") : EtatRobot(), _etat_precedent(dernier_etat) {};
        Fige* _instance;
        std::string _etat_precedent;

};

#endif // FIGE_H
