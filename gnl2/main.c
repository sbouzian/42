#include "get_next_line.h"
#include <fcntl.h>

int main(int ac, char **av)
{
	int fd;
	(void)ac;
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		return (1);
	get_next_line(fd);
	return (0);
}