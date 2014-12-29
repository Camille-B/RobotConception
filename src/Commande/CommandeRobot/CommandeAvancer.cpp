#include "../../../include/Commande/CommandeRobot/CommandeAvancer.h"

CommandeAvancer::CommandeAvancer() : CommandeRobot("AVANCER") {}

CommandeAvancer::CommandeAvancer(Robot* r, const Invocateur* f) : CommandeRobot("AVANCER", r){
    _pos = new Position(f->read_int(), f->read_int());
}

void CommandeAvancer::execute(){
    CommandeAvancer::_etat_pos = CommandeAvancer::_pos;
    CommandeRobot::_robot->avancer(CommandeAvancer::_pos->x(),CommandeAvancer::_pos->y());
};

void CommandeAvancer::desexecute(){
    CommandeAvancer::_pos = CommandeAvancer::_etat_pos;
    CommandeRobot::_robot->avancer(CommandeAvancer::_pos->x(),CommandeAvancer::_pos->y());
};
