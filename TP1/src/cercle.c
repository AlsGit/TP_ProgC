#include <stdio.h>
#include <math.h> 
/* math.h contient la variable M_PI pour PI
 * NB : ajouter l'option -lm à gcc pour le lien avec math.h
 * Exemple : gcc -o cercle cercle.c -lm
 */

int main() {
	double rayon = 6;
	double perimetre = M_PI * rayon * 2; // utilisation de M_PI dans un calcul 
  double perimetre = M_PI * rayon * 2; // utilisation de M_PI dans un calcul 
	double aire = M_PI * pow(rayon,2); // pow(base,puissance) vient de math.h 

	printf("Rayon du cercle : %.2f\n", rayon);
	printf("Aire du cercle = %.2f\n", aire);
	printf("Périmètre du cercle = %.2f\n", perimetre);
  printf("Périmètre du cercle = %.2f\n", perimetre);
	// %.2f affiche une variable de type float limité à 2 décimales
}

/* Note à moi-même pour la suite du cours
 * Il est possible d'automatiser un peu la compilation grâce à make
 * $ touch makefile # dans le répertoire où se trouve le fichier FICHIER.c à compiler
 * 
 * makefile:
 * 	CC = gcc
 *	CFLAGS = -Wall -Wextra -lm # noté l'option -lm pour le lien math.h :)
 *	%: 
 *	
 * La ligne "%:" prend les variables CC et CFLAGS et génère la commande suivante :
 * $ ${CC} ${FLAGS} -o FICHIER -c FICHIER.c
 * 	
 * Ce que le terminal traduira par : 
 * $ gcc -Wall -Wextra -lm -o FICHIER -c FICHIER.c
 *
 * Exemple utilisation pour cet exercice : 
 * $ make cercle # noté l'absence de l'extension .c pour make
 */

