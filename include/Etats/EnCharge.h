/*!
 * \file EnCharge.h
 * \brief Modélisation de l'état EnChargeFacePlot du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 1.0
 * \date 20 Novembre 2014
 */

#ifndef ENCHARGE_H
#define ENCHARGE_H

#include "EnRoute.h"

/*!
 * \class EnCharge
 * \brief Classe de l'état EnCharge du Robot.
 *
 * Classe singleton modélisant les actions du Robot dans l'état EnCharge.
 */
class EnCharge : public EnRoute
{
    public:

        /*!
         * \brief Avancer le robot.
         *
         * Retourne un pointeur vers l'instance de l'état EnCharge et autorise l'action auprès du Robot.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* avancer();

        /*!
         * \brief Rencontrer un plot.
         *
         * Retourne un pointeur vers l'instance de l'état EnChargeFacePlot et autorise l'action auprès du Robot.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* rencontrerPlot();

        /*!
         * \brief Changement de direction du robot.
         *
         * Retourne un pointeur vers l'instance de l'état EnCharge et autorise l'action auprès du Robot.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* tourner();

        /*!
         * \brief Pèse un objet.
         *
         * Retourne un pointeur vers l'instance de l'état EnCharge et autorise l'action auprès du Robot.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* peser();

        /*!
        * \brief Nom de l'état courant
        * \return std::string
        */
        virtual std::string nom_etat() const {return "EnCharge";}

        /*!
        * \brief Instance de EnCharge
        *
        * Cette méthode permet de récupérer (ou de créer si elle n'éxiste pas) un einstance de l'état EnCharge.
        *
        * \return EnCharge*
        */
        static EnCharge* instance();

    private:
        EnCharge() : EnRoute() {};
        static EnCharge* _instance;
};

#endif // ENCHARGE_H
