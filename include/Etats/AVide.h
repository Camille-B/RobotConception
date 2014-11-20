/*!
 * \file AVide.h
 * \brief Modélisation de l'état AVide du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 1.0
 * \date 20 Novembre 2014
 */

#ifndef AVIDE_H
#define AVIDE_H

#include "EnRoute.h"

/*!
 * \class AVide
 * \brief Classe de l'état AVide du Robot.
 *
 * Classe singleton modélisant les actions du Robot dans l'état AVide.
 */
class AVide : public EnRoute
{
    public:

        /*!
         * \brief Avancer le robot.
         *
         * Retourne un pointeur vers l'instance de l'état AVide et autorise l'action auprès du Robot.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* avancer();

        /*!
         * \brief Rencontrer un plot.
         *
         * Retourne un pointeur vers l'instance de l'état AVideFacePlot et autorise l'action auprès du Robot.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* rencontrerPlot();

        /*!
         * \brief Changement de direction du robot.
         *
         * Retourne un pointeur vers l'instance de l'état AVide et autorise l'action auprès du Robot.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* tourner();

        /*!
        * \brief Nom de l'état courant
        * \return std::string
        */
        virtual std::string nom_etat() const {return "AVide";}

        /*!
        * \brief Instance de AVide
        *
        * Cette méthode permet de récupérer (ou de créer si elle n'éxiste pas) un einstance de l'état AVide.
        *
        * \return AVide*
        */
        static AVide* instance();


    private:
        AVide() : EnRoute() {};
        static AVide* _instance;



};

#endif // AVIDE_H
