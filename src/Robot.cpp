
using namespace std;
#include "Robot.h"


/* Méthodes du robot */
void afficher(){
	//instancier l'afficheur
	//Afficheur aff();
}
void avancer(){
	try{
		_etat_courant = _etat_courant->avancer();
	}catch(ImpossibleToExecute e){
		//Traitement de l'erreur
		cerr << "Impossible to execute figer" << endl
	}
}       
void figer(){
	try{
		_etat_courant = _etat_courant->figer();
	}catch(ImpossibleToExecute e){
		//Traitement de l'erreur
		cerr << "Impossible to execute figer" << endl
	}
}
void poser(){
	try{
		_etat_courant = _etat_courant->poser();
		objet(null);
	}catch(ImpossibleToExecute e){
		//Traitement de l'erreur
		cerr << "Impossible to execute poser" << endl
	}
}
void rencontrerPlot(Plot p){
	try{
		_etat_courant = _etat_courant->rencontrerPlot();
		plot(p);
	}catch(ImpossibleToExecute e){
		//Traitement de l'erreur
		cerr << "Impossible to execute recontrerPlot" << endl
	}

}
void repartir(){
	try{
		_etat_courant = _etat_courant->repartir();
	}catch(ImpossibleToExecute e){
		//Traitement de l'erreur
		cerr << "Impossible to execute repartir" << endl
	}
}
void saisir(Objet o){
	try{
		_etat_courant = _etat_courant->saisir(o);
		objet(o);
	}catch(ImpossibleToExecute e){
		//Traitement de l'erreur
		cerr << "Impossible to execute saisir" << endl
	}
}
void tourner(){
	try{
		_etat_courant = _etat_courant->tourner();
		/*
			à valider et à revoir

			Ici pour tourner, la direction vaut 0,1,2 ou 3 
			pour Nord, Est, Sud, Ouest et on incrémente direction 
			à chaque appel de "tourner".
		*/
		direction((_direction++)%3);
	}catch(ImpossibleToExecute e){
		//Traitement de l'erreur
		cerr << "Impossible to execute tourner" << endl
	}
}


/* Fonctions du robot */
int peser(){
	return objet().poids();
}
int evaluerPlot(){
	return plot().hauteur();
}

/* Setters */
void etat_courant(EtatRobot* e){
	&_etat_courant = e;
}
void plot(Plot p){
	_plot = p;
}
void objet(Objet o){
	_objet = o;
}
void direction(int d){
	_direction = d;
}
void position(Position p){
	_position = p;
}