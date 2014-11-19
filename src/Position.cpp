#include "Position.h"

using namespace std;

ostream& operator<<(ostream& os, Position& p){
    os << "[::POSITION::] (X = " << p.x() << ", Y = " << p.y() << ")" << endl;
}
