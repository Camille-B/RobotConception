/*!
 * \file CommandeEvaluerObst.h
 * \brief Modélisation de la commande EvaluerObst du robot.
 * \author Camille BOINAUD, Fabien PINEL
 * \version 2.0
 * \date 20 Décembre 2014
 */

#ifndef COMMANDEEVALUEROBST_H
#define COMMANDEEVALUEROBST_H

#include "CommandeRobot.h"

/*!
 * \class CommandeEvaluerObst
 * \brief Classe de la Commande EvaluerObst du Robot.
 *
 * Classe modélisant la Commande EvaluerObst, que l'on peut utiliser sur le Robot.
 */
class CommandeEvaluerObst : public CommandeRobot
{
     public:

        /*!
         * \brief Constructeur par défaut de CommandeEvaluerObst
         */
        CommandeEvaluerObst() : CommandeRobot("EVALUEROBSTACLE") {}


        /*!
         * \brief Constructeur de CommandeEvaluerObst
         */
        CommandeEvaluerObst(Robot* r, const Invocateur* f) : CommandeRobot("EVALUEROBSTACLE", r) {}

       /*!
        * \brief Méthode qui réalise l'execution de CommandeEvaluerObst sur le Robot.
        * \return void
        */
        virtual void execute(){
            CommandeRobot::_robot->evaluerPlot();
        }

       /*!
        * \brief Méthode qui retourne un pointeur sur une nouvelle instance de CommandeEvaluerObst.
        * \return Commande*
        */
        virtual Commande* constructeurVirtuel(Robot* r, const Invocateur* f){return new CommandeEvaluerObst(r,f);}

};

#endif // COMMANDEEVALUEROBST_H
