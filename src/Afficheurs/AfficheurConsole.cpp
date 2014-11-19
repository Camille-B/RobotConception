#include "../../include/Afficheurs/AfficheurConsole.h"
#include "../../include/Robot.h"

#include <iostream>

using namespace std;

void AfficheurConsole::afficher(){
    string dir = (robot()->direction()==0)?"NORD":((robot()->direction()==1)?"EST":((robot()->direction()==2)?"SUD":"OUEST"));
    cout << "\n[::INFORMATIONS_ROBOT::]" << endl;
    cout << "\t--> ETAT COURANT : " << robot()->etat_courant()->nom_etat() << endl;
    cout << "\t\t[::DIRECTION::] " <<  dir <<endl;
    cout << "\t\t" << robot()->objet();
    cout << "\t\t" << robot()->plot();
    cout << "\t\t" << robot()->position();
    cout << "\n############################\n" << endl;


}

void AfficheurConsole::trace(std::string message){
    cout << message << endl;
}
