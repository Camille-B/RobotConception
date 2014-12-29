#include "../../../include/Commande/CommandeRobot/CommandeFiger.h"

void CommandeFiger::execute(){
    CommandeRobot::_robot->figer();
};

void CommandeFiger::desexecute(){
        CommandeRobot::_robot->repartir();
};
