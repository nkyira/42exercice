#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
	int fd;
	char *temp;
	fd = open ("read_error.txt", O_RDONLY);
	do {
		temp = get_next_line(fd);
		printf("-------------- \n\n%s\n\n--------------\n", temp);
		free(temp);
	} while(temp);
	close(fd);
}
