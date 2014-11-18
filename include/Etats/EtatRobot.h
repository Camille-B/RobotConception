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
        static std::map<std::string, EtatRobot*> _instance;
        static EtatRobot* instance(std::string etat){return EtatRobot::_instance[etat];}

        EtatRobot(Robot* robot, std::string etat = "");

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

    protected:
        Robot* _robot;

};

class ImpossibleToExecute{};

#endif // ETATROBOT_H
