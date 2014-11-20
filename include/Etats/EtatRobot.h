/*!
 * \file EtatRobot.h
 * \brief Modélisation des états du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 1.0
 * \date 20 Novembre 2014
 */

#ifndef ETATROBOT_H
#define ETATROBOT_H

#include <string>

/*!
 * \class EtatRobot
 * \brief Classe mère des états du Robot.
 *
 * Classe modélisant les actions du Robot selon l'état dans lequel il est. L'ensemble des méthode
 * est vide, throw une exception quand la méthode n'est pas définie dans un état fils.
 */
class EtatRobot
{
    public:

       /*!
        * \brief _instanceInit : instance de l'état initial
        */
        static EtatRobot* instanceInit(){return EtatRobot::_instanceInit;}

        /*!
         * \brief Constructeur par défaut de Robot.
         */
        EtatRobot() = default;

       /*!
        * \brief Méthode abstraite qui retourne le nom de l'instance d'état.
        * \return std::string
        */
        virtual std::string nom_etat() const = 0;

        /*!
         * \brief Déplacement du robot.
         *
         * Vérifie que le robot est dans un état qui l'autorise à se déplacer.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* avancer();

        /*!
         * \brief Immobilisation du robot.
         *
         * Vérifie que le robot est dans un état qui l'autorise à \^etre figé
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* figer();

        /*!
         * \brief Poser un objet.
         *
         * Vérifie que le robot est dans un état qui l'autorise à déposer l'objet qu'il transporte.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* poser();

        /*!
         * \brief Rencontrer un plot.
         *
         * Vérifie que le robot est dans un état qui l'autorise à rencontrer un plot.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* rencontrerPlot();

        /*!
         * \brief Faire repartir le robot.
         *
         * Vérifie que le robot est dans un état figé.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* repartir();

        /*!
         * \brief Saisir un objet.
         *
         * Vérifie que le robot est dans un état qui l'autorise à saisir l'objet.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* saisir();

        /*!
         * \brief Changement de direction du robot.
         *
         * Vérifie que le robot est dans un état qui l'autorise à tourner.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* tourner();

        /*!
         * \brief Pèse un objet.
         *
         * Vérifie que le robot à un objet en charge.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* peser();

        /*!
         * \brief Evalue la heuteur d'un plot.
         *
         * Vérifie que le robot à un plot qui lui est associé et qu'il ne porte pas d'objet.
         *
         * \return EtatRobot*
         */
        virtual EtatRobot* evaluerPlot();

    private:
        static EtatRobot* _instanceInit;

};

/*!
 * \class ImpossibleToExecute
 * \brief Classe d'exception déclenchée si une méthode non autorisée est appellée.
 */
class ImpossibleToExecute{};

#endif // ETATROBOT_H
