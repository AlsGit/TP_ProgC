#include <stdio.h>
#include <string.h> // nécessaire pour pouvoir utiliser strlen()
#include <stdlib.h> // nécessaire pour srandom()
#include <time.h> // nécessaire pour srandom()

int main() {
	srandom(time(NULL)); // https://www.tutorialspoint.com/generating-random-number-in-a-range-in-c
	int min = 1; // 1 minimum parce que pas envie de gérer le cas num2==0
	int max = 100; // valeur maximale pour num
	int num1 = min + (random()%(1+max-min)); // num1 au hasard entre 0 et 100
	int num2 = min + (random()%(1+max-min)); // num2 au hasard entre 0 et 100
	char* op = "+-*/%&|~"; // liste des opérateurs

	for (int c=0; c<(int) strlen(op); c++) { // ou for (unsigned int c=0; c<strlen(op); c++)
		switch (op[c]) { // on va afficher les opérations pour tous les cas
			case '+': 
				printf("%d %c %d = %d\n", num1, op[c], num2, num1+num2);
				break;
			case '-':
				printf("%d %c %d = %d\n", num1, op[c], num2, num1-num2);
				break;
			case '*':
				printf("%d %c %d = %d\n", num1, op[c], num2, num1*num2);
				break;
			case '/':
				printf("%d %c %d = %.2f\n", num1, op[c], num2, (float) num1/(float) num2); // division plus proche de la réalité avec des float plutôt que des int
				break;
			case '%': 
				printf("%d %c %d = %d\n", num1, op[c], num2, num1%num2);
				break;
			case '&': // ET binaire mais je vais garder la sortie en base décimale 
				printf("%d %c %d = %d\n", num1, op[c], num2, num1&num2);
				break;
			case '|': // OU binaire mais toujours sortie décimale 
				printf("%d %c %d = %d\n", num1, op[c], num2, num1|num2);
				break;
			case '~': // complémentaire binaire et sortie en décimale 
				printf("%c%d = %d\n", op[c], num1, ~num1);
				printf("%c%d = %d\n", op[c], num2, ~num2);
				break;
		}
	}
}
