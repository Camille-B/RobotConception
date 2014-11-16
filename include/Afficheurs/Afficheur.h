#ifndef AFFICHEUR_H
#define AFFICHEUR_H

#include <string>

class Robot;

class Afficheur
{
    public:
        Afficheur(Robot* robot = 0) : _robot(robot) {};

        virtual void afficher();
        virtual void trace(std::string message);

    protected:
        Robot* _robot;
};

#endif // AFFICHEUR_H
