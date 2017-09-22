/*
	Ecrire 2 profils avec 10 questions de chaques
	Il faudra comparer les réponses en fct des deux profils
	Reponse profil1-profil2 en val absolue

AUTEUR 	: KINDONGO / DELAHAYE
DATE 	: 22/09/17

*/

#include "barriere.h"
#include <stdlib.h>
/************************************
	Variables globales
************************************/

int qprofil_1, qprofil_2 ;
int distance;
int X;
int main(int  argc, char**argv)
{
	X=1;
	distance=0;
	

		while(X)
		{
			ECRIRE_MESSAGE ("QUESTION 1 p1:  Aimez-vous les sciences ?");
			LIRE_INT(qprofil_1);
			ECRIRE_MESSAGE ("QUESTION 1 p2:  Aimez-vous les sciences ?");
			LIRE_INT(qprofil_2);

			if ((qprofil_1<10)&&(qprofil_2<10))
			{
				X=0;
			}	
			else 
			{
				X=1;
			}

		}
		distance = abs(qprofil_1-qprofil_2);

		while((qprofil_1<10) && (qprofil_2<10))
		{
			ECRIRE_MESSAGE ("QUESTION 2 p1:  Aimez-vous  les pates ?");
			LIRE_INT(qprofil_1);
			ECRIRE_MESSAGE ("QUESTION 2 p2:  Aimez-vous  les pates ?");
			LIRE_INT(qprofil_2);

			if ((qprofil_1<10)&&(qprofil_2<10))
			{
				X=0;
			}	
			else 
			{
				X=1;
			}
		}	
		distance = distance + abs(qprofil_1-qprofil_2);
		
			while((qprofil_1<10) && (qprofil_2<10))
		{
			ECRIRE_MESSAGE ("QUESTION 3 p1:  Aimez-vous  les gens ?");
			LIRE_INT(qprofil_1);
			ECRIRE_MESSAGE ("QUESTION 3 p2:  Aimez-vous  les gens ?");
			LIRE_INT(qprofil_2);

			if ((qprofil_1<10)&&(qprofil_2<10))
			{
				X=0;
			}	
			else 
			{
				X=1;
			}
		}	
				
		distance = distance + abs(qprofil_1-qprofil_2);

	//}
	/*else
		ECRIRE_MESSAGE("Saisir une valeur entre 0 (Je n'aime pas) et 9 (J'aime !) ");*/

	if (distance<10)
	{
		ECRIRE_MESSAGE("MATCH");
	}
	else
	{
		ECRIRE_MESSAGE("NO MATCH");
	}
	return 0;
}
