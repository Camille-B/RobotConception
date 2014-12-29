#include "../../../include/Commande/CommandeRobot/CommandeSaisir.h"


CommandeSaisir::CommandeSaisir() : CommandeRobot("SAISIR"){}

CommandeSaisir::CommandeSaisir(Robot* r, const Invocateur* f) : CommandeRobot("SAISIR",r){
    _objet = new Objet(f->read_int());
}

void CommandeSaisir::execute(){
    CommandeRobot::_robot->saisir(*_objet);
}

void CommandeSaisir::desexecute(){
    CommandeRobot::_robot->poser();
}
