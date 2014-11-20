#include "../include/Position.h"

using namespace std;

std::ostream& operator<<(std::ostream& os, const Position& p){
    return os << "[::POSITION::] (X = " << p._x << ", Y = " << p._y << ") ; " << endl;
}
