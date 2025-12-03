#include <stdio.h>

#define PRINTSIZE(Type) printf("Size of " #Type ": %zu\n", sizeof(Type)) /* je l'ai volé de https://stackoverflow.com/a/47257702 */

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
  return 0;
}
