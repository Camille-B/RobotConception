#ifndef ENCHARGE_H
#define ENCHARGE_H

#include "EnRoute.h"


class EnCharge : public EnRoute
{
    public:
        virtual EtatRobot* avancer();
        virtual EtatRobot* rencontrerPlot();
        virtual EtatRobot* tourner();
        virtual EtatRobot* peser();

        virtual std::string nom_etat() const {return "EnCharge";}

        static EnCharge* instance();

    private:
        EnCharge() : EnRoute() {};
        static EnCharge* _instance;
};

#endif // ENCHARGE_H
