#include "Robot.h";
#include <iostream>

using namespace std;



/* Méthodes du robot */
void Robot::afficher(){
	//instancier l'afficheur
	//Afficheur aff();
}
void Robot::avancer(){
	try{
		etat_courant(etat_courant()->avancer());
	}catch(ImpossibleToExecute e){
		//Traitement de l'erreur
		cerr << "Impossible to execute avancer" << endl;
	}
}

void Robot::figer(){
	try{
		etat_courant(etat_courant()->figer());
	}catch(ImpossibleToExecute e){
		//Traitement de l'erreur
		cerr << "Impossible to execute figer" << endl;
	}
}

void Robot::poser(){
	try{
		etat_courant(etat_courant()->poser());
		objet(NULL);
	}catch(ImpossibleToExecute e){
		//Traitement de l'erreur
		cerr << "Impossible to execute poser" << endl;
	}
}

void Robot::rencontrerPlot(Plot p){
	try{
		etat_courant(etat_courant()->rencontrerPlot());
		plot(p);
	}catch(ImpossibleToExecute e){
		//Traitement de l'erreur
		cerr << "Impossible to execute rencontrerPlot" << endl;
	}
}

void Robot::repartir(){
	try{
		etat_courant(etat_courant()->repartir());
	}catch(ImpossibleToExecute e){
		//Traitement de l'erreur
		cerr << "Impossible to execute repartir" << endl;
	}
}

void Robot::saisir(Objet o){
	try{
		etat_courant(etat_courant()->saisir());
		objet(o);
	}catch(ImpossibleToExecute e){
		//Traitement de l'erreur
		cerr << "Impossible to execute saisir" << endl;
	}
}

void Robot::tourner(){
	try{
		etat_courant(etat_courant()->tourner());
		/*
			à valider et à revoir

			Ici pour tourner, la direction vaut 0,1,2 ou 3
			pour Nord, Est, Sud, Ouest et on incrémente direction
			à chaque appel de "tourner".
		*/
		direction((direction()+1)%3);
	}catch(ImpossibleToExecute e){
		//Traitement de l'erreur
		cerr << "Impossible to execute tourner" << endl;
	}
}


/* Fonctions du robot */
int Robot::peser(){
	return objet().poids();
}
int Robot::evaluerPlot(){
	return plot().hauteur();
}

/* Setters */
void Robot::etat_courant(EtatRobot* e){
	etat_courant(e);
}
void Robot::plot(Plot p){
	_plot = p;
}
void Robot::objet(Objet o){
	_objet = o;
}
void Robot::direction(int d){
	_direction = d;
}
void Robot::position(Position p){
	_position = p;
}
