#include "Plot.h"
#include <iostream>

using namespace std;

ostream& operator<<(ostream& os,Plot& p){
    return os << "[::PLOT::]" << p.hauteur() << endl;
}
