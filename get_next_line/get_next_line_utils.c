#include "get_next_line.h"
#include "stdio.h"

void	reset_str(char *str)
{
	int	i;

	i = -1;
	while (++i <= BUFFER_SIZE + 1)
		str[i] = '\0';
}

size_t	push_len(char *str_left)
{
	size_t	i;

	i = 0;
	while (str_left[i] && i <= BUFFER_SIZE)
		i++;
	return (i);
}

int	contains_nl(char *str)
{
	while (*str)
	{
		if (*(str++) == '\n')
			return (1);
	}
	return (0);
}

void	copy_str(char *src, char *dest, int l)
{
	while (*src && l--)
		*(dest++) = *(src++);
}
