#ifndef ROBOT_H
#define ROBOT_H

#include "RobotAAfficher.h"
#include "Position.h"
#include "Objet.h"
#include "Plot.h"
#include "Etats/EtatRobot.h"
#include "Etats/Fige.h"

using namespace std;


class Robot : public RobotAAfficher
{
    public:
        /* Constructeur */
        Robot(EtatRobot* e = EtatRobot::instanceInit(), Plot p = Plot(), Objet o = Objet(), int dir = 0, Position pos = Position()) :
            _etat_courant(e), _plot(p), _objet(o), _direction(dir), _position(pos) {};

        /* Méthodes du robot */
        void afficher();
        void avancer();
        void figer();
        void poser();
        void rencontrerPlot(Plot p);
        void repartir();
        void saisir(Objet o);
        void tourner();

        /* Fonctions du robot */
        int peser();
        int evaluerPlot();

        /* Accesseurs */
        EtatRobot* etat_courant() const {return _etat_courant;}
        Plot plot() const {return _plot;}
        Objet objet() const {return _objet;}
        int direction() const {return _direction;}
        Position position() const {return _position;}

        /* Setters */
        void etat_courant(EtatRobot* e);
        void plot(Plot p);
        void objet(Objet o);
        void direction(int d);
        void position(Position p);


    private:
        EtatRobot* _etat_courant;
        Plot _plot;
        Objet _objet;
        int _direction;
        Position _position;
};

#endif // ROBOT_H
