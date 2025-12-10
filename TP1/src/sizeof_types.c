#include <stdio.h>

#define PRINTSIZE(Type) printf("Size of %s : %zu\n", #Type, sizeof(Type)) // je l'ai volé de https://stackoverflow.com/a/47257702
/* #define : définition d'une macro
 * PRINTSIZE(Type): nom de la macro acceptant ici un seul argument
 * printf() : La macro affichera juste du texte dans la console
 * #Type : Nom de la variable passée en argument de la macro PRINTSIZE
 * %zu : spécifie le format du type qui sera passé en argument
 * sizeof(Type) : opérateur pour déterminer la taille du type de données Type
 */

int main() {
	PRINTSIZE(char);
	PRINTSIZE(unsigned char);
	PRINTSIZE(short);
	PRINTSIZE(unsigned short);
	PRINTSIZE(int);
	PRINTSIZE(unsigned int);
	PRINTSIZE(long int);
	PRINTSIZE(unsigned long int);
	PRINTSIZE(long long int);
	PRINTSIZE(unsigned long long int);
	PRINTSIZE(float);
	PRINTSIZE(double);
	PRINTSIZE(long double);
}
