#ifndef LECTEURFICHIER_H
#define LECTEURFICHIER_H

#include "Invocateur.h"
#include "Commande.h"

class LecteurFichier
{
    private:
        istream* _stream;

    public:
        LecteurFichier(string);
        LecteurFichier(istream* ifs = &cin);

        virtual void lecture(Robot*);
        virtual Commande* lecture_commande(Robot*);
        virtual int read_int() const;
        virtual string read_string() const;
};

#endif // LECTEURFICHIER_H
