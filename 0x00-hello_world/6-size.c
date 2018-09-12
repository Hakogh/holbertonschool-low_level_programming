#include <stdio.h>

int main(void)

{
  char mychar;
  int myint;
  long int mylongint;
  long long int mylonglongint;
  float myfloat;
  
  printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(mychar));
  printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(myint));
  printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(mylongint));
  printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(mylonglongint));
  printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(myfloat));
  return(0);
}
