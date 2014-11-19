#ifndef AFFICHEUR_H
#define AFFICHEUR_H

#include <string>

class Robot;

class Afficheur{
    public:
        Afficheur(Robot* robot = 0) : _robot(robot) {};

        virtual void afficher() = 0;
        virtual void trace(std::string message) = 0;

    protected:
        Robot* robot(){return _robot;}

    private :
        Robot* _robot;

};

#endif // AFFICHEUR_H
