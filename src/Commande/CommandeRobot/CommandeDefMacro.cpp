#include "../../../include/Commande/CommandeRobot/CommandeDefMacro.h"

CommandeDefMacro::CommandeDefMacro(Robot* r, const Invocateur* f) : CommandeRobot("DEFMACRO",r){
    _name_macro = f->read_string();
    Commande* commande;
    Invocateur* g = const_cast<Invocateur*>(f);
    while((commande = g->lecture_commande(r)) > 0 && dynamic_cast<CommandeFinMacro*>(commande) == 0){
        CommandeDefMacro::_commandes.push_back(commande);
    }
}

void CommandeDefMacro::execute(){
    CommandeAppeler::_map_macro[_name_macro] = new CommandeAppeler(_name_macro, _commandes);
}
