#ifndef AVIDEFACEPLOT_H
#define AVIDEFACEPLOT_H

#include <EnRoute.h>


class AVideFacePlot : public EnRoute
{
    public:
        virtual void saisirObjet(Objet o);
        virtual void tourner();

        virtual int evaluerPlot();
        virtual std::string nom_etat() const {return "AVideFacePlot";}

        static AVideFacePlot* instance();

    private:
        AVideFacePlot(Robot* robot) : EnRoute(robot, "AVideFacePlot") {};
        AVideFacePlot* _instance;

};

#endif // AVIDEFACEPLOT_H
