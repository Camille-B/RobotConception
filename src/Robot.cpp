#include "../include/Robot.h"
#include <iostream>

using namespace std;

void Robot::avancer(int x, int y){
	try{
		etat_courant(etat_courant()->avancer());
		_position.x(x);
		_position.y(y);
		notifier();
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute avancer");
	}
}

void Robot::figer(){
	try{
		etat_courant(etat_courant()->figer());
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute figer");
	}
}

void Robot::poser(){
	try{
		etat_courant(etat_courant()->poser());
		objet(0);
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute poser");
	}
}

void Robot::rencontrerPlot(Plot p){
	try{
		etat_courant(etat_courant()->rencontrerPlot());
		plot(p);
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute rencontrerPlot");
	}
}

void Robot::repartir(){
	try{
		etat_courant(etat_courant()->repartir());
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute repartir");
	}
}

void Robot::saisir(Objet o){
	try{
		etat_courant(etat_courant()->saisir());
		objet(o);
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute saisir");
	}
}

void Robot::tourner(){
	try{
		etat_courant(etat_courant()->tourner());
		switch(direction()) {
            case NORTH : direction(EAST); break;
            case EAST : direction(SOUTH); break;
            case SOUTH : direction(WEST); break;
            case WEST : direction(NORTH); break;
		}
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute tourner");
	}
}

int Robot::peser(){
    try{
		etat_courant(etat_courant()->peser());
        return objet().poids();
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute peser");
	}
	return -1;
}

int Robot::evaluerPlot(){
    try{
		etat_courant(etat_courant()->evaluerPlot());
        return plot().hauteur();
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute evaluerPlot");
	}
	return -1;
}
