#ifndef ETATROBOT_H
#define ETATROBOT_H

#include "../Objet.h"
#include "../Plot.h"
#include <map>
#include <string>

class Robot;

class EtatRobot
{
    public:
        static EtatRobot* _instanceInit;
        static EtatRobot* instanceInit(){return EtatRobot::_instanceInit;}

        EtatRobot();

        virtual std::string nom_etat() const = 0;

        virtual EtatRobot* avancer(int,int);
        virtual EtatRobot* figer();
        virtual EtatRobot* poser();
        virtual EtatRobot* rencontrerPlot(Plot p);
        virtual EtatRobot* repartir();
        virtual EtatRobot* saisir(Objet o);
        virtual EtatRobot* tourner();
        virtual EtatRobot* peser();
        virtual EtatRobot* evaluerPlot();
};

class ImpossibleToExecute{};

#endif // ETATROBOT_H
