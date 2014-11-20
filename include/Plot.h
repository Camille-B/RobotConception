/*!
 * \file Plot.h
 * \brief Modélisation d'un plot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 1.0
 * \date 20 Novembre 2014
 */


#ifndef PLOT_H
#define PLOT_H

#include <iostream>

/*!
 * \class Plot
 * \brief Classe représentant l'objet Plot.
 *
 * Classe modélisant le plot, il est caractérisé par sa hauteur.
 */
class Plot
{
    public:

        /*!
         * \brief Constructeur de Plot.
         *
         * \param h : hauteur du plot
         * \return Plot
         */
        Plot(int h = 0) : _hauteur(h) {};

        /*!
         * \brief Accesseur _hauteur.
         *
         * \return int
         */
        int hauteur(){return _hauteur;}

        /*!
         * \brief Setter _hauteur.
         *
         * \param h : nouvelle valeur de la hauteur du plot
         * \return void
         */
        void hauteur(int h){_hauteur = h;}

        /*!
         * \brief Opérateur <<
         *
         * \param std::ostream& : sortie de l'affichage
         * \param Plot& : plot à afficher
         * \return std::ostream&
         */
        friend std::ostream& operator<<(std::ostream&, const Plot&);

    private:
        int _hauteur;
};

#endif // PLOT_H
