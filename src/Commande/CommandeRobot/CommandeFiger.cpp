#include "../../../include/Commande/CommandeRobot/CommandeFiger.h"

void CommandeFiger::execute(){
    Commande::_historiqueCommandes.push(this);
    CommandeRobot::_robot->figer();
};

void CommandeFiger::desexecute(){
        CommandeRobot::_robot->repartir();

};
