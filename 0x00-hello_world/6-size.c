#include<stdio.h>
/**
 * main - Entry point
 * Description: using the main function
 * the program prints size of variables
 * main: prints the size of a variable
 * sizeof - evaluates the size of a variable
 *  Return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
long int longType;
long long int intlongType;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(intlongType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
