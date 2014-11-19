#include "../../include/Etats/EnChargeFacePlot.h"
#include "../../include/Etats/AVide.h"


EnChargeFacePlot* EnChargeFacePlot::_instance = NULL;

EnChargeFacePlot* EnChargeFacePlot::instance(){
    if(_instance == NULL) EnChargeFacePlot::_instance = new EnChargeFacePlot;
    return EnChargeFacePlot::_instance;
}

EtatRobot* EnChargeFacePlot::poser(){
    return AVide::instance();
}

EtatRobot* EnChargeFacePlot::tourner(){
    return EnChargeFacePlot::instance();
}

EtatRobot* EnChargeFacePlot::peser(){
    return EnChargeFacePlot::instance();
}

