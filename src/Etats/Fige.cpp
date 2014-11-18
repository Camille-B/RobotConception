#include "../../include/Etats/Fige.h"

static Fige::_instance = null;

EtatRobot* repartir(){
    return _etat_precedent();
}

Fige* Fige::instance(EtatRobot* etat_precedent){
    if(_instance==null) return Fige(etat_precedent);
    else{
        _instance->_etat_precedent = etat_precedent;
        return _instance;
    }
}
