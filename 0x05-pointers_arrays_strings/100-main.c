#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @str: The string to convert
 *
 * Return: The integer value of the converted string
 */
int _atoi(char *str)
{
    int sign = 1;
    unsigned int res = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            res = res * 10 + (str[i] - '0');
        }
        else if (res > 0)
        {
            break;
        }
        i++;
    }
    return (res * sign);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
