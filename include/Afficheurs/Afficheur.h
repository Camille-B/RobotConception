/*!
 * \file Afficheur.h
 * \brief Modélisation des afficheurs pour le Robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 1.0
 * \date 20 Novembre 2014
 */

#ifndef AFFICHEUR_H
#define AFFICHEUR_H

#include <string>

class Robot;

/*!
 * \class Afficheur
 * \brief Classe abstraite pour les Afficheurs du Robot.
 *
 * Cette classe abrite les méthodes nécéssaires à l'affichage du Robot, elles seront implémentées dans les classes filles.
 */
class Afficheur{
    public:

        /*!
         * \brief Constructeur de Afficheur.
         *
         * \param robot : pointeur vers l'instance du Robot à afficher
         * \return Afficheur
         */
        Afficheur(Robot* robot = 0) : _robot(robot) {};

        /*!
         * \brief Affichage du robot.
         *
         * Méthode abstraite qui permet l'affichage des données concernant le Robot.
         *
         * \return void
         */
        virtual void afficher() = 0;

        /*!
         * \brief Trace d'éxecution du Robot.
         *
         * Méthode abstraite qui permet l'affichage de messages concernant l'éxecution du Robot.
         *
         * \param message : message de trace à afficher.
         * \return void
         */
        virtual void trace(std::string message) = 0;

    protected:

        /*!
         * \brief Accesseur _robot.
         *
         * \return Robot*
         */
        Robot* robot(){return _robot;}

    private :
        Robot* _robot;

};

#endif // AFFICHEUR_H
