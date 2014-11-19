#include "../include/Robot.h"
#include <iostream>

using namespace std;

void Robot::avancer(int x, int y){
	try{
        trace("##### Robot::avancer() #####");
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
        trace("##### Robot::figer() #####");
		etat_courant(etat_courant()->figer());
        notifier();
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute figer");
	}
}

void Robot::poser(){
	try{
        trace("##### Robot::poser() #####");
		etat_courant(etat_courant()->poser());
		objet(0);
		plot(0);
        notifier();
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute poser");
	}
}

void Robot::rencontrerPlot(Plot p){
	try{
        trace("##### Robot::rencontrerPlot() #####");
		etat_courant(etat_courant()->rencontrerPlot());
		plot(p);
        notifier();
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute rencontrerPlot");
	}
}

void Robot::repartir(){
	try{
        trace("##### Robot::repartir() #####");
		etat_courant(etat_courant()->repartir());
        notifier();
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute repartir");
	}
}

void Robot::saisir(Objet o){
	try{
        trace("##### Robot::saisir() #####");
		etat_courant(etat_courant()->saisir());
		objet(o);
		plot(0);
        notifier();
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute saisir");
	}
}

void Robot::tourner(){
	try{
        trace("##### Robot::tourner() #####");
		etat_courant(etat_courant()->tourner());
		switch(direction()) {
            case NORTH : direction(EAST); break;
            case EAST : direction(SOUTH); break;
            case SOUTH : direction(WEST); break;
            case WEST : direction(NORTH); break;
		}
		notifier();
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute tourner");
	}
}

int Robot::peser(){
    try{
        trace("##### Robot::peser() #####");
		etat_courant(etat_courant()->peser());
		notifier();
        return objet().poids();
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute peser");
	}
	return -1;
}

int Robot::evaluerPlot(){
    try{
        trace("##### Robot::evaluerPlot() #####");
		etat_courant(etat_courant()->evaluerPlot());
		notifier();
        return plot().hauteur();
	}catch(ImpossibleToExecute e){
		trace("Impossible to execute evaluerPlot");
	}
	return -1;
}
