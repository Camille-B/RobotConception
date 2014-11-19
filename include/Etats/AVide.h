#ifndef AVIDE_H
#define AVIDE_H

#include <EnRoute.h>


class AVide : public EnRoute
{
    public:
        virtual EtatRobot* avancer();
        virtual EtatRobot* rencontrerPlot();
        virtual EtatRobot* tourner();

        virtual std::string nom_etat() const {return "AVide";}
        static AVide* instance();


    private:
        AVide() : EnRoute() {};
        static AVide* _instance;



};

#endif // AVIDE_H
