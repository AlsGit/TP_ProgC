#include <stdio.h>

int main() {
  char myChar = 'a';
  unsigned char uChar = 212;
  short myShort = 12;
  unsigned short uShort = 12;
  int myInt = 12;
  unsigned int uInt = 42;
  long int lInt = 123456L;
  unsigned long int ulInt = 123456UL;
  long long int llInt = 123456789LL;
  unsigned long long int ullInt = 123456789LL;
  float myFloat = 1234.56;
  double myDouble = 3.14159;
  long double lDouble = 10.15L;

  printf("myChar = %c\n", myChar);
  printf("uChar = %hhu\n", uChar);
  printf("myShort = %hd\n", myShort);
  printf("uShort = %hd\n", myShort);
  printf("myInt = %i\n", myInt);
  printf("uInt = %u\n", uInt);
  printf("lInt = %ld\n", lInt);
  printf("ulInt = %lu\n", ulInt);
  printf("llInt = %lld\n", llInt);
  printf("ullInt = %llu\n", ullInt);
  printf("myFloat = %f\n", myFloat);
  printf("myDouble = %lf\n", myDouble);
  printf("lDouble = %Lf\n", lDouble);
  
  return 0;
}
