#ifndef AVIDE_H
#define AVIDE_H

#include <EnRoute.h>


class AVide : public EnRoute
{
    public:
        virtual EtatRobot* avancer(int,int);
        virtual EtatRobot* rencontrerPlot(Plot p);
        virtual EtatRobot* tourner();

        virtual std::string nom_etat() const {return "AVide";}

        static AVide* instance();

    private:
        AVide() : EnRoute() {};
        AVide* _instance;


};

#endif // AVIDE_H
