/*!
 * \file Fige.h
 * \brief Modélisation de l'état Fige du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 1.0
 * \date 20 Novembre 2014
 */

#ifndef FIGE_H
#define FIGE_H

#include "EtatRobot.h"

/*!
 * \class Fige
 * \brief Classe de l'état Fige du Robot.
 *
 * Classe singleton modélisant les actions du Robot dans l'état Fige.
 */
class Fige : public EtatRobot
{
    public:

       /*!
        * \brief Remettre en route le Robot
        *
        * Retourne un pointeur vers l'instance de l'état précédent.
        *
        *\return EtatRobot*
        */
        virtual EtatRobot* repartir();

       /*!
        * \brief Nom de l'état courant
        * \return std::string
        */
        virtual std::string nom_etat() const {return "Fige";}


       /*!
        * \brief Instance de Fige
        *
        * Cette méthode permet de récupérer (ou de créer si elle n'éxiste pas) un einstance de l'état Fige.
        *
        * \param etat_precedent : pointeur sur l'instance de l'état précédent utilisé pour repartir
        * \return Fige*
        */
        static Fige* instance(EtatRobot* etat_precedent);

        /*!
         * \brief Accesseur _etat_precedent.
         *
         * \return Fige*
         */
        EtatRobot* etat_precedent(){return _etat_precedent;}

        /*!
         * \brief Setter _etat_precedent.
         * \param e : pointeur vers l'état précédent modifié
         * \return void
         */
        void etat_precedent(EtatRobot* e){_etat_precedent = e;};

    private:
        Fige() : EtatRobot(){};
        EtatRobot* _etat_precedent = 0;
        static Fige* _instance;



};

#endif // FIGE_H
