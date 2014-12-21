#include "../../../include/Commande/CommandeRobot/CommandePoser.h"


void CommandePoser::execute(){
    Objet objet = CommandeRobot::_robot->objet();
    _etat_obj = &objet;
    CommandeRobot::_robot->poser();
}

void CommandePoser::desexecute(){
    CommandeRobot::_robot->saisir(*_etat_obj);
}
