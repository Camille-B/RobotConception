#include "../../../include/Commande/CommandeRobot/CommandeRencontrerObst.h"

CommandeRencontrerObst::CommandeRencontrerObst() : CommandeRobot("RENCONTREROBSTACLE") {}

CommandeRencontrerObst::CommandeRencontrerObst(Robot* r, const Invocateur* f) : CommandeRobot("RENCONTREROBSTACLE",r) {
    _plot = f->read_int();
}

void CommandeRencontrerObst::execute(){
    CommandeRobot::_robot->rencontrerPlot(_plot);
}
