#include "../../include/Commande/Commande.h"


map<string,Commande*> Commande::_commandesInscrites;
stack<Commande*> Commande::_historiqueCommandes;


Commande::Commande(string s){
    Commande::_name = s;
    Commande::_commandesInscrites[s] = this;
}


Commande* Commande::nouvelleCommande(string s, Robot* r, const Invocateur* f){
    Commande* cmd = Commande::_commandesInscrites[s];
    if(cmd==NULL)
        throw NotFoundException();
    else return cmd->constructeurVirtuel(r,f);
}

void Commande::desexecute(){
    throw UnableToReverseException();
}


