#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring..
 * @s: pointer to string
 * @accept: pointer to string
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
    int lenght = 0;
    int j;
    int found;

    while (s[lenght] != '\0')
    {       
        j = 0;
        found = 1;
        while (accept[j] != '\0')
        {
            if (s[lenght] == accept[j])
            {
                found = 0;
                break;
            }
            j++;
        }
        if (found == 1)
        {
            break;
        }
        lenght++; 
    }
    return (lenght);
}