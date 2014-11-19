#include "../include/Objet.h"
#include <iostream>

using namespace std;


std::ostream& operator<<(std::ostream& os, const Objet& o){
    return os << "[::OBJET::] Poids : "<< o._poids <<endl;
}
