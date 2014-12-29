#include "../../include/Commande/CommandeAppeler.h"

map<string,CommandeAppeler*> CommandeAppeler::_map_macro;

CommandeAppeler::CommandeAppeler(string nom, vector<Commande*> commandes) : Commande("APPELER"){
    CommandeAppeler::_liste_commandes = commandes;
    CommandeAppeler::_nom = nom;
    cout << "NOM MACRO : " <<_nom << "\n" <<endl;
}

CommandeAppeler::CommandeAppeler(const Invocateur* i) : Commande("APPELER") {
    _nom  = i->read_string();
    CommandeAppeler* commande = CommandeAppeler::_map_macro[_nom];
    if(commande!=0) _liste_commandes = commande->_liste_commandes;
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


