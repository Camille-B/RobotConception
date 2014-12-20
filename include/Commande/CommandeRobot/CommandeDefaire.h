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
         * \brief Constructeur de CommandeDefaire
         */
        CommandeDefaire(Robot* r, const Invocateur* f) : CommandeRobot(_nom_commande, r) {}

       /*!
        * \brief Méthode qui réalise l'execution de CommandeDefaire sur le Robot.
        * \return void
        */
        virtual void execute(){
            try{
                Commande::_historiqueCommandes.top()->desexecute();
            } catch(UnableToReverseException e){
                cerr<< "Cette commande ne peut pas être annulée" << endl;
            }
            Commande::_historiqueCommandes.pop();
        }


        /*!
        * \brief Méthode qui retourne un pointeur sur une nouvelle instance de CommandeDefaire.
        * \return Commande*
        */
        virtual Commande* constructeurVirtuel(Robot* r, const Invocateur* f){return new CommandeDefaire(r,f);}

    private:

        /*!
         * \brief _nom_commande : clé désignant l'objet CommandeAvancer.
         */
        string _nom_commande = "DEFAIRE";
};

#endif // COMMANDEDEFAIRE_H
