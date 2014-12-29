/*!
 * \file CommandeAppeler.h
 * \brief Modélisation de la commande Appeler Macro du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 2.0
 * \date 29 Décembre 2014
 */

#ifndef COMMANDEAPPELER_H
#define COMMANDEAPPELER_H

#include "Commande.h"

/*!
 * \class CommandeAppeler
 * \brief Classe de la Commande CommandeAppeler du Robot.
 *
 * Classe modélisant l'appel d'une macro de commandes préalablement lue par l'Invocateur.
 */
class CommandeAppeler : public Commande
{
    public:

        /*!
         * \brief Collection contenant les différentes instances de CommandeAppeler
         */
        static map<string,CommandeAppeler*> _map_macro;

        /*!
         * \brief Constructeur de CommandeAppeler
         */
        CommandeAppeler() : Commande("APPELER") {}


        /*!
         * \brief Constructeur de CommandeAppeler
         */
        CommandeAppeler(string,vector<Commande*>);

       /*!
        * \brief Méthode qui réalise l'execution de CommandeAppeler sur le Robot.
        * \return void
        */
        virtual void execute();

        /*!
        * \brief Méthode qui réalise l'annulation de l'ensemble des Commandes executées dans cette macro.
        * \return void
        */
        virtual void desexecute();

    private:

       /*!
        * \brief Collection contenant les différentes instances de Commande d'une Macro
        */
        vector<Commande*> _liste_commandes;

       /*!
        * \brief Nom de la Macro
        */
        string _nom;

};

#endif // COMMANDEAPPELER_H
