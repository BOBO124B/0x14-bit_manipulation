#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * Description: This function generates a random integer, computes its
 * last digit, and prints a message indicating whether the last digit
 * is greater than 5, equal to 0, or less than 6 and not equal to 0.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int n;
int m;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */

        m = n % 10;
        if (m > 5)
                ptintf("Last digit of %d is %d and is greater than 5\n", n, m);
        if (m == 0)
                printf("Last digit of %d is %d and is 0\n", n, m);
        if (m <6 && m != 0)
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
        return (0);
}
