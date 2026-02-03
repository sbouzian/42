#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t len_dst;
    size_t len_src;

    len_dst = ft_strlen(dest);
    len_src = ft_strlen(src);

    if (size <= len_dst)
        return (size + len_src);

    i = 0;
    while (src[i] != '\0' && (len_dst + i + 1) < size)
    {
        dest[len_dst + i] = src[i];
        i++;
    }

    dest[len_dst + i] = '\0';
    return (len_dst + len_src);
}