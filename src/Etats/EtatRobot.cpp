#include "../../include/Etats/EtatRobot.h"
#include <map>
#include <string>

map<std::string, EtatRobot*> EtatRobot::_instance;

EtatRobot::EtatRobot(Robot* robot, std::string etat){
    _robot = robot;
    EtatRobot::_instance[etat] = this;
}
