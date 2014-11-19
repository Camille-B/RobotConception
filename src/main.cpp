#include "../include/Robot.h"
#include "../include/Afficheurs/AfficheurConsole.h"
#include <iostream>

using namespace std;


int main(){

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
