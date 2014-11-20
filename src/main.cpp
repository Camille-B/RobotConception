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
#include <iostream>

using namespace std;


int main()
{

    Objet objet(25);
    Plot plot(5);
    Robot robot = Robot(EtatRobot::instanceInit(), SOUTH, Position(5,5));
    robot.attacherAfficheur(new AfficheurConsole(&robot));

    robot.notifier();

    robot.avancer(6,5);
    robot.tourner();
    robot.rencontrerPlot(plot);
    cout << "Evaluation de la hauteur du plot : " << robot.evaluerPlot() << " ;\n" << endl;
    robot.saisir(objet);
    robot.figer();
    robot.repartir();
    robot.tourner();
    robot.avancer(10,10);
    cout << "Pesée de l'objet : " << robot.peser() << " ;\n" << endl;
    robot.rencontrerPlot(plot);
    robot.poser();

    return 0;
}
