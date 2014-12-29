#include "../../../include/Commande/CommandeRobot/CommandeDefMacro.h"

CommandeDefMacro::CommandeDefMacro(Robot* r, const Invocateur* f) : CommandeRobot("DEFMACRO",r) {
    _name_macro = f->read_string();
    Commande* commande;
    while((commande = f->lecture_commande(r))>0 && dynamic_cast<CommandeFinMacro*>(commande) == 0){
        CommandeDefMacro::_commandes.push_back(commande);
    }
}

void CommandeDefMacro::execute(){
    CommandeAppeler::_map_macro[CommandeDefMacro::_name_macro] =
        new CommandeAppeler(CommandeDefMacro::_name_macro, CommandeDefMacro::_commandes);
}
