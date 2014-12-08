#ifndef INVOCATEUR_H
#define INVOCATEUR_H

#include "Commande.h"

class Invocateur
{
    public:
        virtual void lecture(Robot*) = 0;

        virtual int read_int() const = 0;
        virtual string read_string() const = 0;

};

#endif // INVOCATEUR_H
