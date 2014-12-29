#include "../../../include/Commande/CommandeRobot/CommandeRepartir.h"


CommandeRepartir::CommandeRepartir() : CommandeRobot("REPARTIR"){}

CommandeRepartir::CommandeRepartir(Robot* r, const Invocateur* f) : CommandeRobot("REPARTIR",r){}

void CommandeRepartir::execute(){
    CommandeRobot::_robot->repartir();
}

void CommandeRepartir::desexecute(){
    CommandeRobot::_robot->figer();
}
