#ifndef ROBOT_H
#define ROBOT_H

#include "RobotAAfficher.h"
#include "Position.h"
#include "Objet.h"
#include "Plot.h"
#include "Etats/EtatRobot.h"
#include "Etats/Fige.h"

using namespace std;

enum Direction{

    NORTH,
    EAST,
    SOUTH,
    WEST

};


class Robot : public RobotAAfficher
{
    public:
        /* Constructeur et destructeur */
        Robot(EtatRobot* e = EtatRobot::instanceInit(), Direction dir = NORTH, Position pos = Position()) : RobotAAfficher(),
            _etat_courant(e), _plot(0), _objet(0), _direction(dir), _position(pos) {};
        virtual ~Robot() = default;

        /* Méthodes du robot */
        void avancer(int,int);
        void figer();
        void poser();
        void rencontrerPlot(Plot p);
        void repartir();
        void saisir(Objet o);
        void tourner();

        int peser();
        int evaluerPlot();

        /* Accesseurs */
        EtatRobot* etat_courant() const {return _etat_courant;}
        Plot plot() const {return _plot;}
        Objet objet() const {return _objet;}
        Direction direction() const {return _direction;}
        Position position() const {return _position;}

        /* Setters */
        void etat_courant(EtatRobot* e){_etat_courant = e;}
        void plot(Plot p){_plot = p;}
        void objet(Objet o){_objet = o;}
        void direction(Direction d){_direction = d;}
        void position(Position p){_position = p;}


    private:
        EtatRobot* _etat_courant;
        Plot _plot;
        Objet _objet;
        Direction _direction;
        Position _position;
};

#endif // ROBOT_H
