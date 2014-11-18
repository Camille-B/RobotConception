#include "../../include/Etats/EtatRobot.h"
#include "../../include/Etats/AVide.h"


EtatRobot* EtatRobot::_instanceInit = AVide::instance();

EtatRobot* EtatRobot::avancer(){
    throw ImpossibleToExecute();
}

EtatRobot* EtatRobot::figer(){
    throw ImpossibleToExecute();
}

EtatRobot* EtatRobot::poser(){
    throw ImpossibleToExecute();
}

EtatRobot* EtatRobot::rencontrerPlot(){
    throw ImpossibleToExecute();
}

EtatRobot* EtatRobot::repartir(){
    throw ImpossibleToExecute();
}

EtatRobot* EtatRobot::saisir(){
    throw ImpossibleToExecute();
}

EtatRobot* EtatRobot::tourner(){
    throw ImpossibleToExecute();
}

EtatRobot* EtatRobot::peser(){
    throw ImpossibleToExecute();
}

EtatRobot* EtatRobot::evaluerPlot(){
    throw ImpossibleToExecute();
}
