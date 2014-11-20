#include "../include/Plot.h"
#include <iostream>

using namespace std;

ostream& operator<<(ostream& os, const Plot& p){
    return os << "[::PLOT::] Hauteur : " << p._hauteur << " ; "<< endl;
}
