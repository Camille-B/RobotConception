/*!
 * \file Position.h
 * \brief Modélisation de la position du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 1.0
 * \date 20 Novembre 2014
 */

#ifndef POSITION_H
#define POSITION_H

#include <ostream>

/*!
 * \class Position
 * \brief Classe représentant la Position du robot.
 *
 * Classe modélisant la position du robot.
 */
class Position
{
    public:

        /*!
         * \brief Constructeur de Position.
         *
         * \param x : abscisse de la position
         * \param y : ordonnée de la position
         * \return Position
         */
        Position(int x = 0, int y = 0) : _x(x), _y(y) {};

        /*!
         * \brief Accesseur _x.
         *
         * \return int
         */
        int x(){return _x;};

        /*!
         * \brief Accesseur _y.
         *
         * \return int
         */
        int y(){return _y;};

        /*!
         * \brief Setter _x.
         *
         * \param newX : nouvelle valeur de l'abscisse x
         * \return void
         */
        void x(int newX){_x = newX;};

        /*!
         * \brief Setter _y.
         *
         * \param newX : nouvelle valeur de l'ordonnée y
         * \return void
         */
        void y(int newY){_y = newY;};

        /*!
         * \brief Opérateur <<
         *
         * \param std::ostream& : sortie de l'affichage
         * \param Position& : position à afficher
         * \return std::ostream&
         */
        friend std::ostream& operator<<(std::ostream&, const Position&);

    private:
        int _x;
        int _y;
};

#endif // POSITION_H
