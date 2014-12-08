#include "../../../include/Commande/CommandeRobot/CommandeAvancer.h"

Position* CommandeAvancer::_pos;

CommandeAvancer::CommandeAvancer(Robot* r, const Invocateur* f) : CommandeRobot(_nom_commande, r) {
    _pos->x(f->read_int());
    _pos->y(f->read_int());
}

void CommandeAvancer::execute(){
    CommandeAvancer::_etat_pos.push_back(CommandeAvancer::_pos);
    CommandeRobot::_robot->avancer(CommandeAvancer::_pos->x(),CommandeAvancer::_pos->y());
};

void CommandeAvancer::desexecute(){
    CommandeAvancer::_etat_pos.pop_back();
    CommandeAvancer::_pos = CommandeAvancer::_etat_pos[CommandeAvancer::_etat_pos.size()];
    CommandeRobot::_robot->avancer(CommandeAvancer::_pos->x(),CommandeAvancer::_pos->y());
};
