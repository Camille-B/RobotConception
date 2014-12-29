/*!
 * \file CommandeRepartir.h
 * \brief Modélisation de la commande Repartir du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 2.0
 * \date 21 Décembre 2014
 */

#ifndef COMMANDEREPARTIR_H
#define COMMANDEREPARTIR_H

#include "CommandeRobot.h"

/*!
 * \class CommandeRepartir
 * \brief Classe de la Commande Repartir du Robot.
 *
 * Classe modélisant la Commande Repartir, que l'on peut utiliser sur le Robot.
 */
class CommandeRepartir : public CommandeRobot
{
    public:

        /*!
         * \brief Constructeur par défaut de CommandeRepartir
         */
        CommandeRepartir();


        /*!
         * \brief Constructeur de CommandeRepartir
         */
        CommandeRepartir(Robot* r, const Invocateur* f);


       /*!
        * \brief Méthode qui réalise l'execution de CommandeRepartir sur le Robot.
        * \return void
        */
        virtual void execute();


       /*!
        * \brief Méthode qui désexecute la commande CommandeRepartir.
        * \return void
        */
        virtual void desexecute();


        /*!
        * \brief Méthode qui retourne un pointeur sur une nouvelle instance de CommandeRepartir.
        * \return Commande*
        */
        virtual Commande* constructeurVirtuel(const Invocateur* f, Robot* r){return new CommandeRepartir(r,f);}

};

#endif // COMMANDEREPARTIR_H
