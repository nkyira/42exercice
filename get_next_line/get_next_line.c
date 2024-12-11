/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:08:06 by jodavis           #+#    #+#             */
/*   Updated: 2024/12/11 06:31:03 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	str_add(char **big_str, char *add_str)
{
	char	*new_str;

	if (!add_str)
		return (0);
	new_str = malloc(str_len(*big_str, '\0') + str_len(add_str, '\0') + 1);
	if (!new_str)
		return (0);
	*new_str = '\0';
	str_cat(new_str, *big_str, '\0');
	str_cat(new_str, add_str, '\0');
	free(*big_str);
	free(add_str);
	*big_str = new_str;
	add_str = NULL;
	return (1);
}

int	cut_trash(char **big_str, char **trash_str)
{
	char	*temp;

	temp = *big_str;
	while (*temp != '\n')
		temp++;
	temp++;
	*trash_str = malloc(str_len(temp, '\0') + 1);
	if (!trash_str)
		return (0);
	**trash_str = '\0';
	str_cat(*trash_str, temp, '\0');
	temp = malloc(str_len(*big_str, '\n') + 1);
	if (!temp)
	{	
		free(*trash_str);
		return (0);
	}
	*temp = '\0';
	str_cat(temp, *big_str, '\n');
	free(*big_str);
	*big_str = temp;
	return (1);
}

void	final_free(char **s)
{
	if (*s)
	{
		free(*s);
		*s = NULL;
	}
}

char	*get_next_line(int fd)
{
	char		*ret_str;
	static char	*trash_str;

	ret_str = trash_str;
	trash_str = NULL;
	if (!ret_str)
	{
		ret_str = my_read(fd, BUFFER_SIZE);
		if (!ret_str)
			return (NULL);
	}
	while (!contains_newline(ret_str))
	{
		if (!str_add(&ret_str, my_read(fd, BUFFER_SIZE)))
		{
			final_free(&ret_str);
			return (NULL);
		}
	}
	if (contains_newline(ret_str))
		if (!cut_trash(&ret_str, &trash_str))
			return (NULL);
	return (ret_str);
}
