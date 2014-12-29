#include "../../include/Commande/CommandeAppeler.h"

map<string,CommandeAppeler*> CommandeAppeler::_map_macro;

CommandeAppeler::CommandeAppeler(string nom, vector<Commande*> commandes) : Commande("APPELER"){
    CommandeAppeler::_liste_commandes = commandes;
    CommandeAppeler::_nom = nom;
}

void CommandeAppeler::execute(){
    for(Commande* com : CommandeAppeler::_liste_commandes){
        com->execute();
    }
}

void CommandeAppeler::desexecute(){
    for(vector<Commande*>::reverse_iterator i = _liste_commandes.rbegin(); i != _liste_commandes.rend(); ++i) {
        (*i)->desexecute();
    }
}


