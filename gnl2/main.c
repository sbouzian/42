#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int ac, char **av)
{
    int fd;
    char *line;
    int i;

    if (ac != 2)
    {
        printf("Uso: %s <archivo>\n", av[0]);
        return (1);
    }

    fd = open(av[1], O_RDONLY);
    if (fd < 0)
    {
        perror("Error al abrir el archivo");
        return (1);
    }

    i = 1;
    printf("=== INICIO DE LECTURA ===\n");
    line = get_next_line(fd);
    while (line)
    {
        printf("Linea %d completa: '%s'\n", i, line);
        free(line);
        line = get_next_line(fd);
        i++;
    }
    printf("=== FIN DE LECTURA ===\n");

    close(fd);
    return (0);
}