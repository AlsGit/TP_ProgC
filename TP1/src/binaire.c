#include <stdio.h>
#include <stdlib.h> // nécessaire pour srandom()
#include <time.h> // nécessaire pour time()

int main() {
	unsigned int decimal[5] = {0, 4096, 65536, 65535, 1024};
	
	for (int i=0; i<5; i++) { // affichage des 5 valeurs en binaire
		int tobase = 2; // binaire = base 2
		int tbin = 1; // initialisation de la taille du binaire
		int reste = decimal[i]; // reste de chaque division

		printf("(%d)_10 = 0b", decimal[i]);

		/* Détermination de la taille du binaire */
		/* La taille dépendra du nombre de divisions successives du nombre décimal*/
		while ((decimal[i]/tobase) > 0) {
			tbin++; // chaque divion incrémente la taille finale du binaire
			decimal[i] /= tobase; 
		}
		int binaire[tbin]; // initialisation du binaire avec sa taille

		/* Position du modulo à sa place à chaque division */
		for (int j=0; j<tbin; j++) {
			binaire[tbin-j-1] = reste % tobase;
			reste /= tobase;
		}

		/* Représentation du binaire dans la console */
		for (int j=0; j<tbin; j++) {
			printf("%d", binaire[j]);
		}

		 printf("\n");
	}
}
