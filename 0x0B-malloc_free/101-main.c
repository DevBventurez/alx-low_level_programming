#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s$\n", tab[i]);
    }
}

/**
 * strtow - Splits a string into words
 * @str: The string to be split
 *
 * Return: Pointer to an array of strings
 */
char **strtow(char *str)
{
    int i, j, k, len, words;
    char **tab;

    len = 0;
    words = 0;
    while (str[len] != '\0')
    {
        if (str[len] == ' ')
        {
            while (str[len] == ' ')
                len++;
        }
        else
        {
            words++;
            while (str[len] != ' ' && str[len] != '\0')
                len++;
        }
    }
    tab = malloc(sizeof(char *) * (words + 1));

    if (tab == NULL)
        return (NULL);

    len = 0;
    for (i = 0; i < words; i++)
    {
        while (str[len] == ' ')
            len++;

        for (j = len; str[j] != ' ' && str[j] != '\0'; j++)
            ;

        tab[i] = malloc(sizeof(char) * (j - len + 1));

        if (tab[i] == NULL)
        {
            for (k = 0; k < i; k++)
                free(tab[k]);
            free(tab);
            return (NULL);
        }

        for (k = 0; len < j; k++, len++)
            tab[i][k] = str[len];
        tab[i][k] = '\0';
    }
    tab[i] = NULL;

    return (tab);
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
