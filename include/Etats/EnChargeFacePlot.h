/*!
 * \file EnChargeFacePlot.h
 * \brief Modélisation de l'état EnChargeFacePlot du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 1.0
 * \date 20 Novembre 2014
 */

#ifndef ENCHARGEFACEPLOT_H
#define ENCHARGEFACEPLOT_H

#include "EnRoute.h"

/*!
 * \class EnChargeFacePlot
 * \brief Classe de l'état EnChargeFacePlot du Robot.
 *
 * Classe singleton modélisant les actions du Robot dans l'état EnChargeFacePlot.
 */
class EnChargeFacePlot : public EnRoute
{
    public:

        /*!
         * \brief Poser un objet.
         *
         * Retourne un pointeur vers l'instance de l'état AVideFacePlot et autorise l'action auprès du Robot.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* poser();

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
         * Retourne un pointeur vers l'instance de l'état EnChargeFacePlot et autorise l'action auprès du Robot.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* peser();

        /*!
        * \brief Nom de l'état courant
        * \return std::string
        */
        virtual std::string nom_etat() const {return "EnChargeFacePlot";}

        /*!
        * \brief Instance de EnChargeFacePlot
        *
        * Cette méthode permet de récupérer (ou de créer si elle n'éxiste pas) un einstance de l'état EnChargeFacePlot.
        *
        * \return EnChargeFacePlot*
        */
        static EnChargeFacePlot* instance();

    private:
        EnChargeFacePlot() : EnRoute() {};
        static EnChargeFacePlot* _instance;
};

#endif // ENCHARGEFACEPLOT_H
