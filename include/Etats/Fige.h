#ifndef FIGE_H
#define FIGE_H

#include <EtatRobot.h>


class Fige : public EtatRobot
{
    public:
        virtual void repartir();

        virtual std::string nom_etat() const {return "Fige";}

        static Fige* instance();

    private:
        Fige(Robot* robot = NULL, std::string dernier_etat = "") : EtatRobot(robot, "Fige"), _etat_precedent(dernier_etat) {};
        Fige* _instance;
        std::string _etat_precedent;

};

#endif // FIGE_H
