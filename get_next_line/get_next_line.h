#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
size_t	push_len(char *str_left);
void	reset_str(char *str);
int		contains_nl(char *str);
void	copy_str(char *src, char *dest, int l);

#endif
