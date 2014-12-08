/*!
 * \file CommandeRobot.h
 * \brief Modélisation des commandes du robot, classe fille de Commande qui connait le Robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 2.0
 * \date 8 Décembre 2014
 */

#ifndef COMMANDEROBOT_H
#define COMMANDEROBOT_H

#include "../Commande.h"

/*!
 * \class CommandeRobot
 * \brief Classe mère des commandes du Robot.
 *
 *  Classe fille de commande qui connait le Robot.
 */
class CommandeRobot : public Commande
{
    public:

        /*!
         * \brief Constructeur de CommandeRobot.
         */
        CommandeRobot(string s, Robot* r) : Commande(s), _robot(r) {};

    protected:

        /*!
         * \brief Robot commandé.
         */
        Robot* _robot;

        /*!
        * \brief Méthode abstraite qui retourne un pointeur sur une nouvelle Commande instanciée.
        * \return Commande*
        */
        virtual Commande* constructeurVirtuel(Robot*,const Invocateur*) = 0;

         /*!
        * \brief Méthode abstraite qui réalise l'execution d'une Commande.
        * \return void
        */
        virtual void execute() = 0;

         /*!
        * \brief Méthode qui désexecute une Commande.
        * \return void
        */
        virtual void desexecute(){throw UnnableToReverseException();}
};

#endif // COMMANDEROBOT_H
