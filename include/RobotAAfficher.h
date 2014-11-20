/*!
 * \file RobotAAfficher.h
 * \brief Modélisation du robot et de la gestion de son affichage.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 1.0
 * \date 20 Novembre 2014
 */

#ifndef ROBOTAAFFICHER_H
#define ROBOTAAFFICHER_H

#include "Afficheurs/Afficheur.h"
#include <string>
#include <vector>

/*!
 * \class RobotAAfficher
 * \brief Classe représentant la gestion de l'affichage du Robot.
*/
class RobotAAfficher
{
    public:

       /*!
        * \brief Constructeur par défaut de RobotAAfficher
        */
        RobotAAfficher() = default;


        /*!
         * \brief Ajouter un afficheur.
         *
         * Ajoute un nouvel afficheur pour le robot.
         *
         * \param a : afficheur à ajouter
         * \return void
         */
        void attacherAfficheur(Afficheur* a);

        /*!
         * \brief Supprimer un afficheur.
         *
         * Supprime un afficheur du robot.
         *
         * \param a : afficheur à supprimer
         * \return void
         */
        void detacherAfficheur(Afficheur* a);

        /*!
         * \brief Notifier.
         *
         * Notifie les changements aux afficheurs et déclanche l'affichage de l'état du Robot.
         *
         * \return void
         */
        void notifier();

        /*!
         * \brief Envoie un message à afficher.
         *
         * Envoie un message à afficher par les afficheurs.
         *
         * \param s : message à afficher
         * \return void
         */
        void trace(std::string s);

        /*!
        * \brief Destructeur par défaut de RobotAAfficher
        */
        virtual ~RobotAAfficher() = default;

    private:
        std::vector<Afficheur*> _afficheurs;
};

#endif // ROBOTAAFFICHER_H
