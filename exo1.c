/*
	Ecrire un programme avec la barriere d'abstraction 
	qui permet de saisir une valeur ayant 
	-un chiffre pour la centaine, 
	-un chiffre pour la dizaine
	-un chiffre pour l'unite

AUTEURS : KINDONGO / DELAHAYE 
DATE 	: 22/09/17


*/

#include "barriere.h"
/*********************************
	Variables Globales
**********************************/
int c; //centaine
int d; //dizaine
int u; //unite
int var;
/*********************************
		MAIN
*********************************/
int main (int argc, char **argv)
{
	ECRIRE_MESSAGE("Saisir CDU");
	LIRE_INT(var);

	c=var/100; //
	d=(var-c*100)/10; //
	u=var-c*100-d*10; //

	ECRIRE_MESSAGE("Valeur CDU");
	LIRE_INT(c);
	LIRE_INT(d);
	LIRE_INT(u);

	return 0;
}
