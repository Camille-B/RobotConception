#include "../../include/Etats/Fige.h"

Fige* Fige::_instance = new Fige;

EtatRobot* Fige::repartir(){
    return etat_precedent();
}

Fige* Fige::instance(EtatRobot* etat_precedent){
        _instance->etat_precedent(etat_precedent);
        return _instance;
}
