#ifndef POSITION_H
#define POSITION_H

#include <ostream>


class Position
{
    public:
        Position(int x = 0, int y = 0) : _x(x), _y(y) {};

        int x(){return _x;};
        int y(){return _y;};
        void x(int newX){_x = newX;};
        void y(int newY){_y = newY;};

        friend std::ostream& operator<<(std::ostream&, const Position&);

    private:
        int _x;
        int _y;
};

#endif // POSITION_H
