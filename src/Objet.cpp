#include "Objet.h"
#include <iostream>

using namespace std;


std::ostream& operator<<(std::ostream& os, Objet& o){
    return os<< "[::OBJET::] Poids : "<< o.poids() <<endl;
}
