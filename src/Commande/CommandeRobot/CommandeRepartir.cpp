#include "../../../include/Commande/CommandeRobot/CommandeRepartir.h"

CommandeRepartir::CommandeRepartir(Robot* r, const Invocateur* f) : CommandeRobot(_nom_commande,r){}

void CommandeRepartir::execute(){
    CommandeRobot::_robot->repartir();
}

void CommandeRepartir::desexecute(){
    CommandeRobot::_robot->figer();
}
