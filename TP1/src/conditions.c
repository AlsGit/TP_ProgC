#include <stdio.h>

int main() {
	int somme = 0;

	for (int n=0; n<1000; n++) {
		if (somme > 5000) {
			break; // stop dès que la somme dépasse le max
		}

		if ((n%5)==0 || (n%7==0)) {
			somme += n; // seul cas où on incrémente somme de n si n est divisible par 5 ou 7
		}

		if (n%11 == 0) {
			continue; // équivalent à n += 1 ici
		}
	}

	printf("Somme finale : %d\n", somme);
}
