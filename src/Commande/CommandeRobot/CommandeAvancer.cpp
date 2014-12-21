#include "../../../include/Commande/CommandeRobot/CommandeAvancer.h"

CommandeAvancer::CommandeAvancer(Robot* r, const Invocateur* f) : CommandeRobot(_nom_commande, r) {
    _pos->x(f->read_int());
    _pos->y(f->read_int());
}

void CommandeAvancer::execute(){
    Commande::_historiqueCommandes.push(this);
    CommandeAvancer::_etat_pos = CommandeAvancer::_pos;
    CommandeRobot::_robot->avancer(CommandeAvancer::_pos->x(),CommandeAvancer::_pos->y());
};

void CommandeAvancer::desexecute(){
    CommandeAvancer::_pos = CommandeAvancer::_etat_pos;
    CommandeRobot::_robot->avancer(CommandeAvancer::_pos->x(),CommandeAvancer::_pos->y());
};
