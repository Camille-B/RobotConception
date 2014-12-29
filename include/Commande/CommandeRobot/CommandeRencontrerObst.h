/*!
 * \file CommandeRencontrerObst.h
 * \brief Modélisation de la commande RencontrerObstacle du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 2.0
 * \date 21 Décembre 2014
 */

#ifndef COMMANDERENCONTREROBST_H
#define COMMANDERENCONTREROBST_H

#include "CommandeRobot.h"

/*!
 * \class CommandeRencontrerObst
 * \brief Classe de la Commande RencontrerObstacle du Robot.
 *
 * Classe modélisant la Commande RencontrerObstacle, que l'on peut utiliser sur le Robot.
 */
class CommandeRencontrerObst : public CommandeRobot
{
    public:

        /*!
         * \brief Constructeur par défaut de CommandeRencontrerObst
         */
        CommandeRencontrerObst();


        /*!
         * \brief Constructeur de CommandeRencontrerObst
         */
        CommandeRencontrerObst(Robot* r, const Invocateur* f);


       /*!
        * \brief Méthode qui réalise l'execution de CommandeRencontrerObst sur le Robot.
        * \return void
        */
        virtual void execute();


        /*!
        * \brief Méthode qui retourne un pointeur sur une nouvelle instance de CommandeRencontrerObst.
        * \return Commande*
        */
        virtual Commande* constructeurVirtuel(const Invocateur* f, Robot* r){return new CommandeRencontrerObst(r,f);}

    private:

        /*!
         * \brief _plot : hauteur du plot rencontré par le robot.
         */
        int _plot;

};

#endif // COMMANDERENCONTREROBST_H
