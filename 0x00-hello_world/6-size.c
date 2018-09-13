#include <stdio.h>

int main(void)

{
char myc;
int myi;
long int myli;
long long int mylg;
float myf;

printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(myc));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(myi));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(myli));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(mylg));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(myf));
return (0);
}
