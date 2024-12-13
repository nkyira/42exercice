/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:33:55 by jodavis           #+#    #+#             */
/*   Updated: 2024/12/13 07:06:44 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	str_len(char *s, char end)
{	
	int	i;

	i = 0;
	while (s[i] != end)
	{
		i++;
	}
	return (i);
}

void	str_cat(char *s1, char *s2, char end)
{
	while (*s1)
		s1++;
	while (*s2 != end)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	if (end == '\n')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
}

int	contains_newline(char *s)
{
	while (*s)
	{
		if (*s == '\n')
			return (1);
		s++;
	}
	return (0);
}

char	*fix_error(char **broken, int ret)
{
	char	*fixed;
	char	*temp;

	temp = *broken;
	fixed = malloc(ret + 1);
	if (!fixed)
		return (NULL);
	fixed[ret] = '\0';
	while (ret--)
		fixed[ret] = temp[ret];
	free(*broken);
	printf("(my_read : %s)", fixed);
	return (fixed);
}

char	*my_read(int fd, int size)
{
	char	*ret_str;
	int		ret;

	ret_str = malloc(size + 1);
	if (!ret_str)
		return (NULL);
	ret = read(fd, ret_str, size);
	if (ret <= 0)
	{
		free(ret_str);
		return (NULL);
	}
	ret_str[size] = '\0';
	if (ret != str_len(ret_str, '\0'))
		return (fix_error(&ret_str, ret));
	printf("(my_read : %s)", ret_str);
	return (ret_str);
}
