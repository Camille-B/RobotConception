/*!
 * \file CommandeFinMacro.h
 * \brief Modélisation de la CommandeFinMacro du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 2.0
 * \date 29 Décembre 2014
 */

#ifndef COMMANDEFINMACRO_H
#define COMMANDEFINMACRO_H

#include "Commande.h"

/*!
 * \class CommandeFinMacro
 * \brief Classe de la Commande CommandeFinMacro du Robot.
 *
 * Classe modélisant la fin de la lecture d'une macro de commandes par l'Invocateur.
 */
class CommandeFinMacro : public Commande
{
    public:

        /*!
         * \brief Constructeur de CommandeFinMacro
         */
        CommandeFinMacro() : Commande("FINMACRO") {}


        /*!
         * \brief Constructeur de CommandeFinMacro
         */
        CommandeFinMacro(string,vector<Commande*>);

       /*!
        * \brief Méthode qui réalise l'execution de CommandeFinMacro sur le Robot.
        * \return void
        */
        virtual void execute(){}

       /*!
        * \brief Override de la méthode abstraite provenant de la classe Commande.
        * \return Commande*
        */
        virtual Commande* constructeurVirtuel(const Invocateur*, Robot * = 0) { return 0;}
};


#endif // COMMANDEFINMACRO_H
