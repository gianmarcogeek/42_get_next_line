#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd = open("input.txt", O_RDONLY);
	char *line;
	while(line)
	{
		line = get_next_line(fd);
		printf("%s", line);
	}
}