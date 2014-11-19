#include "../../include/Etats/EnCharge.h"
#include "../../include/Etats/EnChargeFacePlot.h"

EnCharge* EnCharge::_instance = NULL;

EnCharge* EnCharge::instance(){
    if(_instance == NULL) EnCharge::_instance = new EnCharge;
    return EnCharge::_instance;
}

EtatRobot* EnCharge::avancer(){
    return EnCharge::instance();
}

EtatRobot* EnCharge::rencontrerPlot(){
    return EnChargeFacePlot::instance();
}

EtatRobot* EnCharge::tourner(){
    return EnCharge::instance();
}

EtatRobot* EnCharge::peser(){
    return EnCharge::instance();
}
