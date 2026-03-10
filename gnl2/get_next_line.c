#include "get_next_line.h"

char 	*get_next_line(int fd)
{ 
	char	buffer[BUFFER_SIZE];
	int	bytes;
	char	*line;

	line = malloc(1);
	line[0] = '\0';
	bytes = 1;
	while (bytes > 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		buffer[bytes] = '\0';
		printf("antes \n");
		line = ft_strjoin(line, buffer);
		printf("despues \n");
		printf("%s", line);
		if (ft_strchr(line, '\n') != NULL)
			break;
	}
	return (0);
}