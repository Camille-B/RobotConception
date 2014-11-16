#ifndef AFFICHEURCONSOLE_H
#define AFFICHEURCONSOLE_H

#include <Afficheur.h>
#include <string>

class AfficheurConsole : public Afficheur
{
    public:
        AfficheurConsole(Robot* robot = 0) : Afficheur(robot) {};
        virtual void afficher();
        virtual void trace(std::string message);

};

#endif // AFFICHEURCONSOLE_H
