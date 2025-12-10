#include <stdio.h>
#include <math.h> // peut-être utile car on va utiliser des opérateurs arithmétiques

int main() {
	// définition des variables
	int a = 16;
	int b = 3;

	// opération sur les variables
	int somme = a+b;
	int soustraction = b-a;
	int multiplication = a*b;
	float division = (float) a / (float) b; // transformation locale en float pour avoir un résultat plus proche de la réalité
	int modulo = a%b;
	bool egal = a==b;
	bool superieur = a>b;
	
	// affichage des résultats
	printf("a + b = %d\n", somme);
	printf("b - a = %d\n", soustraction);
	printf("a * b = %d\n", multiplication);
	printf("a / b = %.2f\n", division);
	printf("a %% b = %d\n", modulo);
	printf("a == b : %d\n", egal); // pas de spécificateur propre au booléen alors %d ou %i fonctionne (1 pour True et 0 pour False)
	printf("a > b : %i\n", superieur); // juste pour montrer que %i fonctionne aussi dans cet exercice
}
