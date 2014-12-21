/*!
 * \file CommandeAvancer.h
 * \brief Modélisation de la commande Avancer du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 2.0
 * \date 8 Décembre 2014
 */

#ifndef COMMANDEAVANCER_H
#define COMMANDEAVANCER_H

#include "CommandeRobot.h"
#include "../../Position.h"

/*!
 * \class CommandeAvancer
 * \brief Classe de la Commande Avancer du Robot.
 *
 * Classe modélisant la Commande Avancer, que l'on peut utiliser sur le Robot.
 */
class CommandeAvancer : public CommandeRobot
{
    public:

        /*!
         * \brief Constructeur de CommandeAvancer
         */
        CommandeAvancer(Robot* r, const Invocateur* f);

       /*!
        * \brief Méthode qui réalise l'execution de CommandeAvancer sur le Robot.
        * \return void
        */
        virtual void execute();

       /*!
        * \brief Méthode qui désexecute la commande CommandeAvancer.
        * \return void
        */
        virtual void desexecute();

        /*!
        * \brief Méthode qui retourne un pointeur sur une nouvelle instance de CommandeAvancer.
        * \return Commande*
        */
        virtual Commande* constructeurVirtuel(Robot* r, const Invocateur* f){return new CommandeAvancer(r,f);}

    private:

        /*!
         * \brief _etat_pos : pointeur sur les positions précédentes du robot.
         */
        Position* _etat_pos;

        /*!
         * \brief _pos : la positions actuelle du robot.
         */
        Position* _pos;

        /*!
         * \brief _nom_commande : clé désignant l'objet CommandeAvancer.
         */
        string _nom_commande = "AVANCER";
};

#endif // COMMANDEAVANCER_H
