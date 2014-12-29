/*!
 * \file CommandeTourner.h
 * \brief Modélisation de la commande Tourner du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 2.0
 * \date 21 Décembre 2014
 */

#ifndef COMMANDETOURNER_H
#define COMMANDETOURNER_H

#include "CommandeRobot.h"

/*!
 * \class CommandeTourner
 * \brief Classe de la Commande Tourner du Robot.
 *
 * Classe modélisant la Commande Tourner, que l'on peut utiliser sur le Robot.
 */
class CommandeTourner : public CommandeRobot
{
    public:

        /*!
         * \brief Constructeur par défaut de CommandeTourner
         */
        CommandeTourner();


        /*!
         * \brief Constructeur de CommandeTourner
         */
        CommandeTourner(Robot* r, const Invocateur* f);


       /*!
        * \brief Méthode qui réalise l'execution de CommandeTourner sur le Robot.
        * \return void
        */
        virtual void execute();


       /*!
        * \brief Méthode qui désexecute la commande CommandeTourner.
        * \return void
        */
        virtual void desexecute();


        /*!
        * \brief Méthode qui retourne un pointeur sur une nouvelle instance de CommandeTourner.
        * \return Commande*
        */
        virtual Commande* constructeurVirtuel(Robot* r, const Invocateur* f){return new CommandeTourner(r,f);}

    private:

       /*!
        * \brief _etat_plot : Plot en face du robot (dans le cas échéant, NULL) du Robot
        */
        Plot* _etat_plot;

        /*!
        * \brief _etat_dir : Direction précédente du Robot.
        */
        Direction _etat_dir;


        /*!
        * \brief _direction : Nouvelle direction du Robot
        */
        Direction _direction;

};

#endif // COMMANDETOURNER_H
