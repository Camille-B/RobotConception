/*!
 * \file AfficheurConsole.h
 * \brief Modélisation de l'afficheur en console pour le Robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 1.0
 * \date 20 Novembre 2014
 */

#ifndef AFFICHEURCONSOLE_H
#define AFFICHEURCONSOLE_H

#include "Afficheur.h"
#include <string>

/*!
 * \class AfficheurConsole
 * \brief Classe pour l'affichage du Robot en console.
 *
 * Cette classe définie les méthodes nécéssaires à l'affichage du Robot en console.
 */
class AfficheurConsole : public Afficheur
{
    public:

        /*!
         * \brief Constructeur de AfficheurConsole.
         *
         * \param robot : pointeur vers l'instance du Robot à afficher. NULL par défaut.
         * \return AfficheurConsole
         */
        AfficheurConsole(Robot* robot = NULL) : Afficheur(robot) {};

        /*!
         * \brief Affichage du robot.
         *
         * Méthode qui permet l'affichage des données concernant le Robot (état courant, direction, données sur la possession d'objet, plot associé, etc.)
         *
         * \return void
         */
        virtual void afficher();

        /*!
         * \brief Trace d'éxecution du Robot.
         *
         * Méthode qui permet l'affichage de messages concernant l'éxecution du Robot.
         *
         * \param message : message de trace à afficher.
         * \return void
         */
        virtual void trace(std::string message);

};

#endif // AFFICHEURCONSOLE_H
