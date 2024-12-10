/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:33:55 by jodavis           #+#    #+#             */
/*   Updated: 2024/11/22 18:22:14 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	str_len(char *s)
{
	int	i;

	while (s[i])
		i++;
	return (i);
}

void	str_cat(char *s1, char *s2)
{
	while (*s1)
		s1++;
	while (*s2)
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

char	*my_read(int fd, int size)
{
	char	*ret_str;

	ret_str = malloc(size + 1);
	if (!ret_str)
		return (NULL);
	if (read(fd, ret_str, size) <= 0)
		return (NULL);
	ret_str[size] = '\0';
	return (ret_str);
}
