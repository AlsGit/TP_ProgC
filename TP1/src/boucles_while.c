#include <stdio.h>

int main() {
	int compteur = 10; // sans précision contraire, j'initialise moi-même le compteur en dur

	if (compteur>10) {
		return 1;
	} // arrêt du script si j'initialise un compteur supérieur à 10

	/* J'ai choisi une approche par "remplissage" 
	 * J'ajoute les # seulement entre les lignes 3 et la valeur du compteur
	 * Sinon j'ajoute une étoile au début et à la fin de la ligne
	 */
	int i = 0;
	while (i<compteur) {
		if (i>0) {
			printf("* ");
		}
		
		int j = 0;
		while (j<i-1) {
			if (i>1 && i<compteur-1) {
				printf("# ");
			} else {
				printf("* ");
			}
			j++; // nécessaire pour arriver au terme de la boucle j==i-1
		}

		printf("*\n");
		i++; // nécessaire pour arriver au terme de la boucle i==compteur 
	}
}
