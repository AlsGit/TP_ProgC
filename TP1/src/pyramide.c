#include <stdio.h> 

int main() {
	int n = 6;

	for (int i=1; i<=n; i++) {
		for (int j=i-1; j<n-1; j++) {
			printf(" "); // autant d'espace que la différence entre le numéro de la ligne et le compteur n
		}
		for (int j=1; j<=i; j++) {
			printf("%d", j); // nombres croissants
		}
		for (int j=i-1; j>=1; j--) {
			printf("%d", j); // nombres décroissants
		}
		printf("\n"); // retour à la ligne à chaque ligne
	}

	printf("\nCi-dessus la pyramide de hauteur %d\n", n);
}
