#include "../../include/Commande/Commande.h"


map<string,Commande*> Commande::_commandesInscrites;
stack<Commande*> Commande::_historiqueCommandes;


Commande::Commande(string s){
    Commande::_commandesInscrites[s] = this;
}


Commande* Commande::nouvelleCommande(string s){
    Commande* cmd = Commande::_commandesInscrites[s];
    if(cmd==NULL)
        throw NotFoundException();
    else return cmd->constructeurVirtuel();
}

void Commande::desexecute(){
    throw UnnableToReverseException();
}


