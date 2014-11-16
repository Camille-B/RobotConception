#ifndef AVIDE_H
#define AVIDE_H

#include <EnRoute.h>


class AVide : public EnRoute
{
    public:
        virtual void avancer();
        virtual void rencontrerPlot(Plot p);
        virtual void tourner();

        virtual std::string nom_etat() const {return "AVide";}

        static AVide* instance();

    private:
        AVide(Robot* robot) : EnRoute(robot, "AVide") {};
        AVide* _instance;


};

#endif // AVIDE_H
