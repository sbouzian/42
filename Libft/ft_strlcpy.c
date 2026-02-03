#include "libft.h"

size_t ft_strlcpy(char *dest, const chat *src, size_t size)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    if (size == 0)
    {
        return (i)
    }
    j = 0;
    while (j < size - 1 && src[j] != '\0')
    {
        dest[j] = src[j];
        j++;
    }
    dest[j] = '\0';
    return (i);
}