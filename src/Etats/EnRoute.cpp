#include "../../include/Etats/EnRoute.h"
#include "../../include/Etats/Fige.h"

EtatRobot* EnRoute::figer(){
    return Fige::instance(this);
}
