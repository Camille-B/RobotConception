
using namespace std;
#include "Robot.h"


/* Méthodes du robot */
void afficher(){
	//instancier l'afficheur
	//Afficheur aff();
}
void avancer(){

}       
void figer(){

}
void poser(){
	try{
		_etat_courant = _etat_courant.poser();
	}catch(EtatRobot.poser e){
		//Traitement de l'erreur
		//cerr << e....
	}


}
void rencontrerPlot(Plot p){

}
void repartir(){

}
void saisir(Objet o){

}
void tourner(){

}


/* Fonctions du robot */
int peser(){
	return 0;
}
int evaluerPlot(){
	return 0;
}

/* Setters */
void etat_courant(EtatRobot* e){

}
void plot(Plot p){

}
void objet(Objet o){

}
void direction(int d){

}
void position(Position p){

}