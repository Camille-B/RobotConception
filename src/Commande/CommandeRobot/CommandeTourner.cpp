#include "../../../include/Commande/CommandeRobot/CommandeTourner.h"

CommandeTourner::CommandeTourner(Robot* r, const Invocateur* f) : CommandeRobot(_nom_commande,r){
    if(f->read_string()=="N") _direction = Direction::NORTH;
    else if(f->read_string()=="E") _direction = Direction::EAST;
    else if(f->read_string()=="S") _direction = Direction::SOUTH;
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
