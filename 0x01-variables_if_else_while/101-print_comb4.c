#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of three digits,
 * separated by a comma and a space. The digits must be different
 * and in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j, k;

    for (i = 0; i <= 7; i++)
    {
        for (j = i + 1; j <= 8; j++)
        {
            for (k = j + 1; k <= 9; k++)
            {
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');

                if (i != 7 || j != 8 || k != 9)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return (0);
}

