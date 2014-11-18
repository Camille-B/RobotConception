#include "../../include/Etats/EtatRobot.h"
#include <map>
#include <string>

EtatRobot* EtatRobot::_instanceInit = AVide::instance();

EtatRobot* avancer(int,int){
    throw ImpossibleToExecute();
}

EtatRobot* figer(){
    throw ImpossibleToExecute();
}

EtatRobot* poser(){
    throw ImpossibleToExecute();
}

EtatRobot* rencontrerPlot(Plot p){
    throw ImpossibleToExecute();
}

EtatRobot* repartir(){
    throw ImpossibleToExecute();
}

EtatRobot* saisir(Objet o){
    throw ImpossibleToExecute();
}

EtatRobot* tourner(){
    throw ImpossibleToExecute();
}

EtatRobot* peser(){
    throw ImpossibleToExecute();
}

EtatRobot* evaluerPlot(){
    throw ImpossibleToExecute();
}
