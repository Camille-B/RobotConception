#include "../../include/Etats/AVide.h"
#include "../../include/Etats/AVideFacePlot.h"

AVide* AVide::_instance = new AVide;

AVide* AVide::instance(){
    return AVide::_instance;
}

EtatRobot* AVide::avancer(){
    return this;
}
EtatRobot* AVide::rencontrerPlot(){
    return AVideFacePlot::instance();
}
EtatRobot* AVide::tourner(){
    return this;
}
