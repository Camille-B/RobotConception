/*!
 * \file EtatRobot.h
 * \brief Modélisation des états du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 1.0
 * \date 20 Novembre 2014
 */

#ifndef ETATROBOT_H
#define ETATROBOT_H

#include <string>

class EtatRobot
{
    public:
        static EtatRobot* _instanceInit;
        static EtatRobot* instanceInit(){return EtatRobot::_instanceInit;}

        EtatRobot() = default;

        virtual std::string nom_etat() const = 0;

        virtual EtatRobot* avancer();
        virtual EtatRobot* figer();
        virtual EtatRobot* poser();
        virtual EtatRobot* rencontrerPlot();
        virtual EtatRobot* repartir();
        virtual EtatRobot* saisir();
        virtual EtatRobot* tourner();
        virtual EtatRobot* peser();
        virtual EtatRobot* evaluerPlot();
};

class ImpossibleToExecute{};

#endif // ETATROBOT_H
