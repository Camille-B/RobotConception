/*!
 * \file CommandeSaisir.h
 * \brief Modélisation de la commande Saisir du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 2.0
 * \date 21 Décembre 2014
 */

#ifndef COMMANDESAISIR_H
#define COMMANDESAISIR_H

#include "CommandeRobot.h"

/*!
 * \class CommandeSaisir
 * \brief Classe de la Commande Saisir du Robot.
 *
 * Classe modélisant la Commande Saisir, que l'on peut utiliser sur le Robot.
 */
class CommandeSaisir : public CommandeRobot
{
    public:

        /*!
         * \brief Constructeur par défaut de CommandeSaisir
         */
        CommandeSaisir();


        /*!
         * \brief Constructeur de CommandeSaisir
         */
        CommandeSaisir(Robot* r, const Invocateur* f);


       /*!
        * \brief Méthode qui réalise l'execution de CommandeSaisir sur le Robot.
        * \return void
        */
        virtual void execute();


       /*!
        * \brief Méthode qui désexecute la commande CommandeSaisir.
        * \return void
        */
        virtual void desexecute();


        /*!
        * \brief Méthode qui retourne un pointeur sur une nouvelle instance de CommandeSaisir.
        * \return Commande*
        */
        virtual Commande* constructeurVirtuel(const Invocateur* f, Robot* r){return new CommandeSaisir(r,f);}

    private:

       /*!
        * \brief _objet : objet saisi par le Robot
        */
        Objet* _objet;

};

#endif // COMMANDESAISIR_H
