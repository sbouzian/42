#include "get_next_line.h"

char 	*get_next_line(int fd)
{
	char	buffer[BUFFER_SIZE];
	int	bytes;
	char	*cajon;

	bytes = 1;
	while (bytes > 0)
	{
		read(fd, buffer, BUFFER_SIZE);
	}
}