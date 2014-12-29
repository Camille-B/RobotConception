/*!
 * \file CommandeDefaire.h
 * \brief Modélisation de la commande Defaire du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 2.0
 * \date 20 Décembre 2014
 */

#ifndef COMMANDEDEFAIRE_H
#define COMMANDEDEFAIRE_H

#include "CommandeRobot.h"

/*!
 * \class CommandeDefaire
 * \brief Classe de la Commande Defaire (annuler commande précédente) du Robot.
 *
 * Classe modélisant la Commande Defaire (annuler commande précédente), que l'on peut utiliser sur le Robot.
 */
class CommandeDefaire : public CommandeRobot
{
   public:

        /*!
         * \brief Constructeur par défaut de CommandeDefaire
         */
        CommandeDefaire() : CommandeRobot("DEFAIRE") {}


        /*!
         * \brief Constructeur de CommandeDefaire
         */
        CommandeDefaire(Robot* r, const Invocateur* f) : CommandeRobot("DEFAIRE", r) {}

       /*!
        * \brief Méthode qui réalise l'execution de CommandeDefaire sur le Robot.
        * \return void
        */
        virtual void execute(){
            try{
                Commande::_historiqueCommandes.pop();
                cout << "Commande à défaire : " << reinterpret_cast<Commande*>(Commande::_historiqueCommandes.top())->_name << "\n" << endl;
                Commande::_historiqueCommandes.top()->desexecute();
                Commande::_historiqueCommandes.pop();
            } catch(UnableToReverseException e){
                cerr<< "Cette commande ne peut pas être annulée" << endl;
            }
            Commande::_historiqueCommandes.pop();
        }


        /*!
        * \brief Méthode qui retourne un pointeur sur une nouvelle instance de CommandeDefaire.
        * \return Commande*
        */
        virtual Commande* constructeurVirtuel(const Invocateur* f, Robot* r){return new CommandeDefaire(r,f);}
};

#endif // COMMANDEDEFAIRE_H
