#ifndef ENROUTE_H
#define ENROUTE_H

#include <EtatRobot.h>


class EnRoute : public EtatRobot
{
    public:
        EnRoute(Robot* robot, std::string nom) : EtatRobot(robot, nom) {};
        virtual void figer();
        virtual void tourner();
};

#endif // ENROUTE_H
