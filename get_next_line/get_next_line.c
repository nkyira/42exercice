/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:08:06 by jodavis           #+#    #+#             */
/*   Updated: 2024/11/20 14:08:18 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int contains_newline(char *s)
{
	while (*s)
	{
		if(*s == '\n')
			return (1);
		s++;
	}
	return (0);
}

char	*get_next_line(int fd)
{
	static int call_count;
	int size;
	int i;
	char *buf;
	char *ret_str

	size = BUFFER_SIZE;
	call_count = 0;
	call_count++;
	ret_str = malloc(size + i);
	if (!ret_str)
		return (NULL);
	if (!read(fd, ret_str, size))
		return (NULL);
	ret_str[size] = '\0';
	while (!contains_newline(buf))
	{
		stradd(ret_str)
	}
	return (ret_str);
}

