/*!
 * \file AVideFacePlot.h
 * \brief Modélisation de l'état AVideFacePlot du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 1.0
 * \date 20 Novembre 2014
 */

#ifndef AVIDEFACEPLOT_H
#define AVIDEFACEPLOT_H

#include "EnRoute.h"

/*!
 * \class AVideFacePlot
 * \brief Classe de l'état AVideFacePlot du Robot.
 *
 * Classe singleton modélisant les actions du Robot dans l'état AVideFacePlot.
 */
class AVideFacePlot : public EnRoute
{
    public:

        /*!
         * \brief Saisir un objet.
         *
         * Retourne un pointeur vers l'instance de l'état EnChargeFacePlot et autorise l'action auprès du Robot.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* saisir();

        /*!
         * \brief Changement de direction du robot.
         *
         * Retourne un pointeur vers l'instance de l'état AVide et autorise l'action auprès du Robot.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* tourner();

        /*!
         * \brief Evalue la heuteur d'un plot.
         *
         * Retourne un pointeur vers l'instance de l'état EnCharge et autorise l'action auprès du Robot.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* evaluerPlot();

        /*!
        * \brief Nom de l'état courant
        * \return std::string
        */
        virtual std::string nom_etat() const {return "AVideFacePlot";}


        /*!
        * \brief Instance de AVideFacePlot
        *
        * Cette méthode permet de récupérer (ou de créer si elle n'éxiste pas) un einstance de l'état AVideFacePlot.
        *
        * \return AVideFacePlot*
        */
        static AVideFacePlot* instance();

    private:
        AVideFacePlot() : EnRoute() {};
        static AVideFacePlot* _instance;

};

#endif // AVIDEFACEPLOT_H
