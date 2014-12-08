/*!
 * \file Commande.h
 * \brief Modélisation des commandes du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 2.0
 * \date 8 Décembre 2014
 */

#ifndef COMMANDE_H
#define COMMANDE_H

#include <string>
#include <map>
#include <stack>

using namespace std;

/*!
 * \class Commande
 * \brief Classe mère des commandes du Robot.
 *
 * Classe modélisant l'ensemble des commandes que l'on peut utiliser sur le Robot.
 */
class Commande
{
    public:

        /*!
        * \brief _commandesInscrites : gestionnaire d'instances.
        */
        static map<string,Commande*> _commandesInscrites;


        /*!
        * \brief _historiqueCommandes : pile des commandes précédemment exécutées.
        */
        static stack<Commande*> _historiqueCommandes;


        /*!
         * \brief Constructeur de Commande.
         */
        Commande(string);


        /*!
        * \brief Méthode static qui retourne un pointeur sur une nouvelle Commande.
        *
        * \param string : clé correspondant à l'objet que l'on souhaite instancier.
        * \return Commande*
        */
        static Commande* nouvelleCommande(string);


        /*!
        * \brief Méthode abstraite qui retourne un pointeur sur une nouvelle Commande instanciée.
        * \return Commande*
        */
        virtual Commande* constructeurVirtuel() = 0;

         /*!
        * \brief Méthode abstraite qui réalise l'execution d'une Commande.
        * \return void
        */
        virtual void execute() = 0;

         /*!
        * \brief Méthode qui désexecute une Commande.
        * \return void
        */
        virtual void desexecute();
};

/*!
 * \class NotFoundException
 * \brief Classe exception NotFoundException.
 *
 * Classe d'exception indiquant une erreur NotFoundException.
 */
class NotFoundException{};

/*!
 * \class UnnableToReverseException
 * \brief Classe exception UnnableToReverseException.
 *
 * Classe d'exception indiquant une erreur UnnableToReverseException.
 */
class UnnableToReverseException{};

#endif // COMMANDE_H
