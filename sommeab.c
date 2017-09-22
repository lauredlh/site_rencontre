/***********************************************************
	Ecrire un prgramme en utilisant la barriere 
	d'abstraction qui permmetrait de saisir 
	un entier A et un entier B
	et d'afficher sa somme
	
	En gros 
		int a,b,c;
		printf("saisir 2 entier\n");
		scanf("%f\n",&a);
		scanf("%f\n",&b);
		c=a+b;
		printf(la somme de %d+%d =%d , a,b,c);

************************************************************/

#include"barriere.h"

int var1;
int var2;
int somme;

int main (int argc, char **argv)
{
	ECRIRE_MESSAGE("Entrer la valeur de var1 :"); //printf("") ;
	LIRE_INT(var1); //scanf("%f\n",&var1);
	
	ECRIRE_MESSAGE("Entrer la valeur de var2 :"); //printf("");
	LIRE_INT(var2); //scanf("%f\n",&var2);
	
	somme = var1 + var2;
	
	ECRIRE_MESSAGE("La somme est");

	ECRIRE_INT(somme);
	return 0;
}
