#include <stdio.h>

/**
 *main -> assign a random number to the variable x each time it is executed
 *prints the last digit of the number stored in the variable x
 *Return: Always 0 (Success)
 */
int main(void)
{
int x;

for (x = 0; x < 10; x++)
{
printf("%d", x);
}
printf("\n");
return (0);
}
