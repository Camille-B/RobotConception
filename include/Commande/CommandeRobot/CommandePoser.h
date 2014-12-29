/*!
 * \file CommandePoser.h
 * \brief Modélisation de la commande Poser du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 2.0
 * \date 21 Décembre 2014
 */

#ifndef COMMANDEPOSER_H
#define COMMANDEPOSER_H

#include "CommandeRobot.h"
#include "../../Objet.h"

/*!
 * \class CommandePoser
 * \brief Classe de la Commande Poser du Robot.
 *
 * Classe modélisant la Commande Poser, que l'on peut utiliser sur le Robot.
 */
class CommandePoser : public CommandeRobot
{
    public:

        /*!
         * \brief Constructeur par défaut de CommandePoser
         */
        CommandePoser() : CommandeRobot("POSER") {}


        /*!
         * \brief Constructeur de CommandePoser
         */
        CommandePoser(Robot* r, const Invocateur* f) : CommandeRobot("POSER",r) {}


       /*!
        * \brief Méthode qui réalise l'execution de CommandePoser sur le Robot.
        * \return void
        */
        virtual void execute();

       /*!
        * \brief Méthode qui désexecute la commande CommandePoser.
        * \return void
        */
        virtual void desexecute();

        /*!
        * \brief Méthode qui retourne un pointeur sur une nouvelle instance de CommandePoser.
        * \return Commande*
        */
        virtual Commande* constructeurVirtuel(const Invocateur* f, Robot* r){return new CommandePoser(r,f);}

    private:

        /*!
         * \brief _etat_obj : pointeur sur l'objet posé par le robot.
         */
        Objet* _etat_obj;

};

#endif // COMMANDEPOSER_H
