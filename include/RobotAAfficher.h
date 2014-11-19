#ifndef ROBOTAAFFICHER_H
#define ROBOTAAFFICHER_H

#include "Afficheurs/Afficheur.h"
#include <string>
#include <vector>


class RobotAAfficher
{
    public:
        RobotAAfficher() = default;

        void attacherAfficheur(Afficheur*);
        void detacherAfficheur(Afficheur*);
        void notifier();
        void trace(std::string);

        virtual ~RobotAAfficher() = default;

    private:
        std::vector<Afficheur*> _afficheurs;
};

#endif // ROBOTAAFFICHER_H
