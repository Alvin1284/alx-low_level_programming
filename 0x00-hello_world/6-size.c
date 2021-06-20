#include<stdio.h>
/**
 * main - Entry point
 * Description: using the main function
 * the program prints size of variables
 * main: prints the size of a variable
 * sizeof - evaluates the size of a variable
 * return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
long int longType;
long long int intlongType;
printf("Size of char: %zu bytes\n", sizeof(charType));
printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(longType);
printf("Size of long long int: %zu bytes\n", sizeof(intlongType);
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}
