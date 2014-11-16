#ifndef ENCHARGEFACEPLOT_H
#define ENCHARGEFACEPLOT_H

#include <EnRoute.h>


class EnChargeFacePlot : public EnRoute
{
    public:
        virtual void poser();
        virtual void tourner();

        virtual int peser();
        virtual std::string nom_etat() const {return "EnChargeFacePlot";}

        static EnChargeFacePlot* instance();

    private:
        EnChargeFacePlot(Robot* robot) : EnRoute(robot, "EnChargeFacePlot") {};
        EnChargeFacePlot* _instance;
};

#endif // ENCHARGEFACEPLOT_H
