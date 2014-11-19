#include "../include/RobotAAfficher.h"
#include <algorithm>

using namespace std;

void RobotAAfficher::attacherAfficheur(Afficheur* a){
    _afficheurs.push_back(a);
}

void RobotAAfficher::detacherAfficheur(Afficheur* a){
    _afficheurs.erase(remove(_afficheurs.begin(), _afficheurs.end(), a), _afficheurs.end());
}

void RobotAAfficher::notifier(){
    for(Afficheur* a : _afficheurs){
        a->afficher();
    }
}

void RobotAAfficher::trace(std::string message){
    for(Afficheur* a : _afficheurs){
        a->trace(message);
    }
}
