#include "get_next_line.h"
#include "stdio.h"
#include "fcntl.h"

int main()
{
	int fd = open("test.txt", O_RDONLY);
	char *temp;

	do
	{
		temp = get_next_line(fd);
		printf("%s", temp);
		free(temp);
	}while (temp);
}
