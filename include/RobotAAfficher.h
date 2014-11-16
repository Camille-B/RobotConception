#ifndef ROBOTAAFFICHER_H
#define ROBOTAAFFICHER_H

#include "Afficheurs/Afficheur.h"
#include <string>
#include <vector>


class RobotAAfficher
{
    public:
        void attacherAfficheur(Afficheur* a);
        void detacherAfficheur(Afficheur* a);
        void notifier() const;
        void trace(std::string message) const;

        virtual ~RobotAAfficher();

    private:
        std::vector<Afficheur*> _afficheurs;
};

#endif // ROBOTAAFFICHER_H
