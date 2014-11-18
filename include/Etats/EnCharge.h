#ifndef ENCHARGE_H
#define ENCHARGE_H

#include <EnRoute.h>


class EnCharge : public EnRoute
{
    public:
        virtual void avancer(int,int);
        virtual void rencontrerPlot(Plot p);
        virtual void tourner();

        virtual int peser();
        virtual std::string nom_etat() const {return "EnCharge";}

        static EnCharge* instance();

    private:
        EnCharge(Robot* robot) : EnRoute(robot, "EnCharge") {};
        EnCharge* _instance;
};

#endif // ENCHARGE_H
