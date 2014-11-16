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

        /* Méthodes du robot */
        virtual void avancer();
        virtual void figer();
        virtual void poser();
        virtual void rencontrerPlot(Plot p);
        virtual void repartir();
        virtual void saisir(Objet o);
        virtual void tourner();

        /* Fonctions du robot */
        virtual int peser();
        virtual int evaluerPlot();

    protected:
        Robot* _robot;

};

#endif // ETATROBOT_H
