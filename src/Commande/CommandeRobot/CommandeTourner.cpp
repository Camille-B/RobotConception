#include "../../../include/Commande/CommandeRobot/CommandeTourner.h"

CommandeTourner::CommandeTourner() : CommandeRobot("TOURNER"){}

CommandeTourner::CommandeTourner(Robot* r, const Invocateur* f) : CommandeRobot("TOURNER",r){
    string _read = f->read_string();
    if(_read=="N") _direction = Direction::NORTH;
    else if(_read=="E") _direction = Direction::EAST;
    else if(_read=="S") _direction = Direction::SOUTH;
    else _direction = Direction::WEST;
}

void CommandeTourner::execute(){
    _etat_dir = CommandeRobot::_robot->direction();
    Plot _plot = CommandeRobot::_robot->plot();
    _etat_plot = &_plot;
    CommandeRobot::_robot->tourner(_direction);
}

void CommandeTourner::desexecute(){
    CommandeRobot::_robot->tourner(_etat_dir);
    if(_etat_plot){
        CommandeRobot::_robot->rencontrerPlot(_etat_plot->hauteur());
    }
}
