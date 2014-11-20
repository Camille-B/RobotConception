/*!
 * \file EnRoute.h
 * \brief Modélisation de l'état EnRoute du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 1.0
 * \date 20 Novembre 2014
 */

#ifndef ENROUTE_H
#define ENROUTE_H

#include "EtatRobot.h"

/*!
 * \class EnRoute
 * \brief Classe mère des états dynamiques du Robot.
 *
 * Classe modélisant les actions dynamiques du Robot selon l'état dans lequel il est.
 */
class EnRoute : public EtatRobot
{
    public:

       /*!
        * \brief Constructeur par défaut de EnRoute
        * \return EnRoute
        */
        EnRoute() : EtatRobot() {};

        /*!
         * \brief Figer le Robot.
         *
         * Retourne l'instance en cours et fige le Robot
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* figer();

};

#endif // ENROUTE_H
