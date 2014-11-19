#include "../../include/Afficheurs/AfficheurConsole.h"
#include "../../include/Robot.h"

#include <iostream>

using namespace std;

void AfficheurConsole::afficher(){
    cout << "[::INFORMATIONS_ROBOT::]" << endl;
    cout << "\t" << robot()->objet();
    cout << "\t" << robot()->plot();
    cout << "\t" << robot()->position();


}

void AfficheurConsole::trace(std::string message){
    cout << "[::TRACE::] " << message << endl;
}
