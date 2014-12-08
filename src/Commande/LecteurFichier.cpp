#include <iostream>
#include <fstream>
#include "../../include/Commande/LecteurFichier.h"



LecteurFichier::LecteurFichier(string file){
    _stream = new ifstream(file, ios::in);
}
LecteurFichier::LecteurFichier(istream* ifs){
    _stream = ifs;
}

void LecteurFichier::lecture(Robot* r){
    stack<Commande*> empty_stack;
    Commande::_historiqueCommandes.swap(empty_stack);

    Commande* commande;
    while(true){
        if((commande = Commande::nouvelleCommande(read_string(),r,reinterpret_cast<Invocateur*>(this)))=0) break;
        Commande::_historiqueCommandes.push(commande);
        commande->execute();
    }
}

int LecteurFichier::read_int() const{
    int i;
    *_stream >> i;
    return i;
}

string LecteurFichier::read_string()const {
    string s;
    *_stream >> s;
    return s;
}
