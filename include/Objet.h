/*!
 * \file Position.h
 * \brief Modélisation de la position du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 1.0
 * \date 20 Novembre 2014
 */

#ifndef OBJET_H
#define OBJET_H

#include <iostream>

/*!
 * \class Objet
 * \brief Classe représentant un Objet.
 *
 * Classe modélisant les objets présents sur les plots et/ou portés par le robot.
 */
class Objet
{
    public:

         /*!
         * \brief Constructeur de Objet.
         *
         * \param p : poids de l'objet
         * \return Objet
         */
        Objet(int p = 0): _poids(p) {};

        /*!
         * \brief Accesseur _poids.
         *
         * \return int
         */
        int poids(){return _poids;}

        /*!
         * \brief Setter _poids.
         *
         * \param h : nouvelle valeur pour la masse de l'objet
         * \return void
         */
        void poids(int p){_poids = p;}

        /*!
         * \brief Opérateur <<
         *
         * \param std::ostream& : sortie de l'affichage
         * \param Objet& : plot à afficher
         * \return std::ostream&
         */
        friend std::ostream& operator<<(std::ostream&, const Objet&);

    private:
        int _poids;
};

#endif // OBJET_H
