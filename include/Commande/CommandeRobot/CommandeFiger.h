/*!
 * \file CommandeFiger.h
 * \brief Modélisation de la commande Figer du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 2.0
 * \date 20 Décembre 2014
 */

#ifndef COMMANDEFIGER_H
#define COMMANDEFIGER_H

#include "CommandeRobot.h"

/*!
 * \class CommandeFiger
 * \brief Classe de la Commande Figer du Robot.
 *
 * Classe modélisant la Commande Figer, que l'on peut utiliser sur le Robot.
 */
class CommandeFiger : public CommandeRobot
{
    public:

        /*!
         * \brief Constructeur de CommandeFiger
         */
        CommandeFiger(Robot* r, const Invocateur* f) : CommandeRobot(_nom_commande, r) {}

       /*!
        * \brief Méthode qui réalise l'execution de CommandeFiger sur le Robot.
        * \return void
        */
        virtual void execute();

       /*!
        * \brief Méthode qui désexecute la commande CommandeFiger.
        * \return void
        */
        virtual void desexecute();

        /*!
        * \brief Méthode qui retourne un pointeur sur une nouvelle instance de CommandeFiger.
        * \return Commande*
        */
        virtual Commande* constructeurVirtuel(Robot* r, const Invocateur* f){return new CommandeFiger(r,f);}

    private:

        /*!
         * \brief _nom_commande : clé désignant l'objet CommandeFiger.
         */
        string _nom_commande = "FIGER";
};

#endif // COMMANDEFIGER_H
