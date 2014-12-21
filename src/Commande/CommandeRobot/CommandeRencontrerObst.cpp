#include "../../../include/Commande/CommandeRobot/CommandeRencontrerObst.h"


CommandeRencontrerObst::CommandeRencontrerObst(Robot* r, const Invocateur* f) : CommandeRobot(_nom_commande,r) {
    _plot = f->read_int();
}

void CommandeRencontrerObst::execute(){
    CommandeRobot::_robot->rencontrerPlot(_plot);
}
