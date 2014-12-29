/*!
 * \file CommandeDefMacro.h
 * \brief Modélisation de la commande DefMacro du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 2.0
 * \date 29 Décembre 2014
 */

#ifndef COMMANDEDEFMACRO_H
#define COMMANDEDEFMACRO_H

#include "CommandeRobot.h"

/*!
 * \class CommandeDefMacro
 * \brief Classe de la Commande DefMacro du Robot.
 *
 * Classe modélisant la Commande DefMacro, que l'on peut utiliser sur le Robot.
 */
class CommandeDefMacro : public CommandeRobot
{
    public:

        /*!
         * \brief Constructeur de CommandeDefMacro
         */
        CommandeDefMacro() : CommandeRobot("DEFMACRO") {};


        /*!
         * \brief Constructeur de CommandeDefMacro
         */
        CommandeDefMacro(Robot* r, const Invocateur* f);

       /*!
        * \brief Méthode qui réalise l'execution de CommandeDefMacro sur le Robot.
        * \return void
        */
        virtual void execute();

        /*!
        * \brief Méthode qui retourne un pointeur sur une nouvelle instance de CommandeDefMacro.
        * \return Commande*
        */
        virtual Commande* constructeurVirtuel(const Invocateur* f, Robot* r){return new CommandeDefMacro(r,f);}

    private:

        string _name_macro;
        vector<Commande*> _commandes;

};

#endif // COMMANDEDEFMACRO_H
