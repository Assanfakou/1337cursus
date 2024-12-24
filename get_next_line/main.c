#include "get_next_line.h"
#include <stdlib.h>

// int main ()
// {
// 	int	fd = open("text.txt", O_RDONLY);

// 	char *line = get_next_line(fd);
// 	while (line != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 		line = get_next_line(fd);

// 	}

// 	close(fd);
// }
int	main(void)
{
	int		fd;
	char	*line;

	fd = open("text.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		return (1);
	}
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	// line = get_next_line(fd);
	// printf("%s", line);
	// free(line);
	// line = get_next_line(fd);
	//  printf("%s", line);
	// free(line);
	close(fd);
	return (0);
}
