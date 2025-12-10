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
	for (int i=0; i<compteur; i++) {
		if (i > 0) {
			printf("* ");
		} // étoile solitaire à chaque début de ligne
		for (int j=0; j<i-1; j++) { // remplit de # entre chaque * selon certaines conditions
			if (i>1 && i<compteur-1) {
				printf("# ");
			} // # de la 3e à l'avant-dernière ligne
			else {
				printf("* ");
			} // * aux lignes 0, 1 et la dernière ligne
		}
		printf("*\n"); // étoile solitaire à chaque fin de ligne
	}
}
