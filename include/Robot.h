/*!
 * \file Robot.h
 * \brief Modélisation du robot et de ses actions. Hérite de RobotAAfficher.h
 * \author Camille BOINAUD, Fabien PINEL
 * \version 1.0
 * \date 20 Novembre 2014
 */

#ifndef ROBOT_H
#define ROBOT_H

#include "RobotAAfficher.h"
#include "Position.h"
#include "Objet.h"
#include "Plot.h"
#include "Etats/EtatRobot.h"
#include "Etats/Fige.h"

using namespace std;

/*!
 * \enum Direction
 * \brief Enum définissant les directions possible : Nord, Est, Sud, Ouest.
 */
enum Direction{

    NORTH,
    EAST,
    SOUTH,
    WEST

};

/*!
 * \class Robot
 * \brief Classe représentant le Robot.
 *
 * Classe modélisant le robot qui hérite de RobotAAfficher.
 */
class Robot : public RobotAAfficher
{
    public:
        /* Constructeur et destructeur */

        /*!
         * \brief Constructeur de Robot.
         *
         * \param e : etat courant du robot, par défaut il est Fige
         * \param dir : direction initiale du robot, par défaut NORTH
         * \param pos : position initiale de l'objet, par défaut (0,0)
         * \return Robot
         */
        Robot(EtatRobot* e = EtatRobot::instanceInit(), Direction dir = NORTH, Position pos = Position()) : RobotAAfficher(),
            _etat_courant(e), _plot(0), _objet(0), _direction(dir), _position(pos) {};

        /*!
         * \brief Destructeur par défaut de Robot.
         */
        virtual ~Robot() = default;

        /* Méthodes du robot */

        /*!
         * \brief Déplacement du robot.
         *
         * Vérifie que le robot est dans un état qui l'autorise à se déplacer, puis change sa position.
         *
         * \param X : abscisse de la position
         * \param Y : ordonnée de la position
         * \return void
         */
        void avancer(int X,int Y);

        /*!
         * \brief Immobilisation du robot.
         *
         * Vérifie que le robot est dans un état qui l'autorise à \^etre figé, puis l'immobilise. La seul action alors possible sera repartir.
         *
         * \return void
         */
        void figer();

        /*!
         * \brief Poser un objet.
         *
         * Vérifie que le robot est dans un état qui l'autorise à déposer l'objet qu'il transporte, puis change le dépose sur le plot.
         *
         * \return void
         */
        void poser();

        /*!
         * \brief Rencontrer un plot.
         *
         * Vérifie que le robot est dans un état qui l'autorise à rencontrer un plot, puis associe le plot au robot.
         *
         * \param plot : plot associé au robot
         * \return void
         */
        void rencontrerPlot(Plot p);

        /*!
         * \brief Faire repartir le robot.
         *
         * Vérifie que le robot est dans un état figé, puis le remet en route.
         *
         * \return void
         */
        void repartir();

        /*!
         * \brief Saisir un objet.
         *
         * Vérifie que le robot est dans un état qui l'autorise à saisir l'objet, puis associe cet objet au robot.
         *
         * \param o : objet à associer au robot
         * \return void
         */
        void saisir(Objet o);

        /*!
         * \brief Changement de direction du robot.
         *
         * Vérifie que le robot est dans un état qui l'autorise à tourner, puis modifie la direction associée au robot.
         * Cette direction est définie d'après la direction avant l'appel de la méthode : Nord->Est, Est->Sud, Sud->Ouest, Ouest->Nord.
         *
         * \return void
         */
        void tourner();

        /*!
         * \brief Pèse un objet.
         *
         * Vérifie que le robot à un objet qui lui est associé, puis retourne la masse de l'objet.
         *
         * \return void
         */
        int peser();

        /*!
         * \brief Evalue la heuteur d'un plot.
         *
         * Vérifie que le robot à un plot qui lui est associé et qu'il ne porte pas d'objet, puis retourne la hauteur du plot.
         *
         * \return void
         */
        int evaluerPlot();

        /* Accesseurs */

        /*!
         * \brief Accesseur _etat_courant.
         *
         * \return EtatRobot*
         */
        EtatRobot* etat_courant() const {return _etat_courant;}

        /*!
         * \brief Accesseur _plot.
         *
         * \return Plot
         */
        Plot plot() const {return _plot;}

        /*!
         * \brief Accesseur _objet.
         *
         * \return Objet
         */
        Objet objet() const {return _objet;}

        /*!
         * \brief Accesseur _direction.
         *
         * \return Direction
         */
        Direction direction() const {return _direction;}

        /*!
         * \brief Accesseur _position.
         *
         * \return Position
         */
        Position position() const {return _position;}

        /* Setters */

        /*!
         * \brief Setter _etat_courant.
         *
         * \param e : nouvel état courant
         * \return void
         */
        void etat_courant(EtatRobot* e){_etat_courant = e;}

        /*!
         * \brief Setter _plot.
         *
         * \param p : nouveau plot
         * \return void
         */
        void plot(Plot p){_plot = p;}

        /*!
         * \brief Setter _objet.
         *
         * \param o : nouvel objet
         * \return void
         */
        void objet(Objet o){_objet = o;}

        /*!
         * \brief Setter _direction.
         *
         * \param d : nouvelle direction
         * \return void
         */
        void direction(Direction d){_direction = d;}

        /*!
         * \brief Setter _position.
         *
         * \param p : nouvelle position
         * \return void
         */
        void position(Position p){_position = p;}


    private:
        EtatRobot* _etat_courant;
        Plot _plot;
        Objet _objet;
        Direction _direction;
        Position _position;
};

#endif // ROBOT_H
