#include "../../include/Etats/Fige.h"

Fige* Fige::_instance = 0;

EtatRobot* Fige::repartir(){
    return etat_precedent();
}

Fige* Fige::instance(EtatRobot* etat_precedent){
    if(_instance==0){
        Fige f = Fige(etat_precedent);
        return &f;
    }
    else{
        _instance->_etat_precedent = etat_precedent;
        return _instance;
    }
}
