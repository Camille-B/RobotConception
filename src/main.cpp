/* Documentation tag for Doxygen
 */

/*!
 * \mainpage Diagrammes de classes du projet
 * <br/>
 * Vous trouverez sur cette page les diagrammes de classe de ce projet. L'ensemble est séparé en trois étapes, chacune correspondant à une attente définie par le sujet.
 * <br/>
 * \section titre1 Diagramme de classes Q1 : Modéliser le comportement du Robot
 *  <br/>
 *  \image  html 1.jpg
 *  <br/><hr/><br/>
 * \section titre2 Diagramme de classes Q2 : Créer les états
 *  <br/>
 *  \image  html 2.jpg
 *  <br/><hr/><br/>
 * \section titre3 Diagramme de classes Q3 : Externaliser la trace
 *  <br/>
 *  \image  html 3.jpg
 *  <br/><hr/><br/>
 * \section titre4 Diagramme de classes Q4 : Création des commandes
 *  <br/>
 *  \image  html 4.jpg
 *  <br/><hr/><br/>
 * \section titre5 Diagramme de classes Q5 : Macros Commandes
 *  <br/>
 *  \image  html 5.jpg
 *  <br/>
 */

/*!
 * \file main.cpp
 * \brief Test d'exécution du programme.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 1.0
 * \date 20 Novembre 2014
 */

#include "../include/Robot.h"
#include "../include/Afficheurs/AfficheurConsole.h"
#include "../include/Commande/LecteurFichier.h"
#include "../include/Commande/CommandeAppeler.h"
#include "../include/Commande/CommandeFinMacro.h"
#include "../include/Commande/CommandeRobot/CommandeDefMacro.h"
#include "../include/Commande/CommandeRobot/CommandeAvancer.h"
#include "../include/Commande/CommandeRobot/CommandeDefaire.h"
#include "../include/Commande/CommandeRobot/CommandeEvaluerObst.h"
#include "../include/Commande/CommandeRobot/CommandeFiger.h"
#include "../include/Commande/CommandeRobot/CommandePeserObjet.h"
#include "../include/Commande/CommandeRobot/CommandePoser.h"
#include "../include/Commande/CommandeRobot/CommandeRencontrerObst.h"
#include "../include/Commande/CommandeRobot/CommandeRepartir.h"
#include "../include/Commande/CommandeRobot/CommandeRobot.h"
#include "../include/Commande/CommandeRobot/CommandeSaisir.h"
#include "../include/Commande/CommandeRobot/CommandeTourner.h"


#include <iostream>

using namespace std;


int main()
{

    Objet objet(25);
    Plot plot(5);
    string filename = "COMMANDES.txt";

    Robot robot = Robot(EtatRobot::instanceInit(), SOUTH, Position(5,5));
    robot.attacherAfficheur(new AfficheurConsole(&robot));

    robot.notifier();

    LecteurFichier l(filename);

    CommandeAvancer a;
    CommandeDefaire b;
    CommandeEvaluerObst c;
    CommandeFiger d;
    CommandePeserObjet e;
    CommandePoser f;
    CommandeRencontrerObst g;
    CommandeRepartir h;
    CommandeSaisir k;
    CommandeTourner m;
    CommandeDefMacro n;
    CommandeFinMacro o;
    CommandeAppeler p;


    l.lecture(&robot);

    return 0;
}
