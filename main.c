#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	char *line = "test";
	int fd = open("file_test.txt", O_RDONLY);

	(void)fd;
	int count = 0;
	while (line != 0 && count < 20)
	{
		line = get_next_line(fd);
		printf("line: %s\n", line);
		free(line);
		++count;
	}

	return (0);
}
