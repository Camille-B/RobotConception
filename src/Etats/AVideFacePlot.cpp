#include "../../include/Etats/AVideFacePlot.h"
#include "../../include/Etats/EnChargeFacePlot.h"
#include "../../include/Etats/AVide.h"


AVideFacePlot* AVideFacePlot::_instance = NULL;

AVideFacePlot* AVideFacePlot::instance(){
    if(AVideFacePlot::_instance == NULL) AVideFacePlot::_instance = new AVideFacePlot;
    return AVideFacePlot::_instance;
}

EtatRobot* AVideFacePlot::saisir(){
    return EnChargeFacePlot::instance();
}

EtatRobot* AVideFacePlot::tourner(){
    return AVide::instance();
}

EtatRobot* AVideFacePlot::evaluerPlot(){
    return AVideFacePlot::instance();
}
