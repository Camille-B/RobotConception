/*!
 * \file CommandePeserObjet.h
 * \brief Modélisation de la commande PeserObjet du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 2.0
 * \date 20 Décembre 2014
 */

#ifndef COMMANDEPESEROBJET_H
#define COMMANDEPESEROBJET_H

#include "CommandeRobot.h"

/*!
 * \class CommandePeserObjet
 * \brief Classe de la Commande PeserObjet du Robot.
 *
 * Classe modélisant la Commande PeserObjet, que l'on peut utiliser sur le Robot.
 */
class CommandePeserObjet : public CommandeRobot
{
     public:

        /*!
         * \brief Constructeur de CommandePeserObjet
         */
        CommandePeserObjet() : CommandeRobot("PESER") {}


        /*!
         * \brief Constructeur de CommandePeserObjet
         */
        CommandePeserObjet(Robot* r, const Invocateur* f) : CommandeRobot("PESER", r) {}

       /*!
        * \brief Méthode qui réalise l'execution de CommandePeserObjet sur le Robot.
        * \return void
        */
        virtual void execute(){
            CommandeRobot::_robot->peser();
        }

       /*!
        * \brief Méthode qui retourne un pointeur sur une nouvelle instance de CommandePeserObjet.
        * \return Commande*
        */
        virtual Commande* constructeurVirtuel(Robot* r, const Invocateur* f){return new CommandePeserObjet(r,f);}

};

#endif // COMMANDEPESEROBJET_H
