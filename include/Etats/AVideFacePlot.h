#ifndef AVIDEFACEPLOT_H
#define AVIDEFACEPLOT_H

#include <EnRoute.h>


class AVideFacePlot : public EnRoute
{
    public:
        virtual EtatRobot* saisirObjet(Objet o);
        virtual EtatRobot* tourner();
        virtual EtatRobot* evaluerPlot();

        virtual std::string nom_etat() const {return "AVideFacePlot";}

        static AVideFacePlot* instance();

    private:
        AVideFacePlot(Robot* robot) : EnRoute(robot, "AVideFacePlot") {};
        AVideFacePlot* _instance;

};

#endif // AVIDEFACEPLOT_H
