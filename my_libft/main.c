#include "libft.h"
#include "fcntl.h"

int main()
{
	int fd = open("test.txt", O_RDONLY);
	char *temp;

	do
	{
		temp = get_next_line(fd);
		ft_printf("%s", temp);
		free(temp);
	}while (temp);
	
	int i = 0;

	while (i++ <= 100)
	{
		ft_printf("%d\t%d\n", i, 100 - i + 1);
	}
}
