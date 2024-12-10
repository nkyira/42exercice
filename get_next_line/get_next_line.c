/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:08:06 by jodavis           #+#    #+#             */
/*   Updated: 2024/11/22 19:08:49 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	str_add(char **big_str, char *add_str)
{
//	printf("add_str : (%s)\n", add_str);
	char	*new_str;

	new_str = malloc(str_len(*big_str) + str_len(add_str) + 1);
	if (!new_str || !add_str)
		return (0);
	*new_str = '\0';
	str_cat(new_str, *big_str);
	str_cat(new_str, add_str);
	free(*big_str);
	free(add_str);
	*big_str = new_str;
	add_str = NULL;
	return (1);
}

char	*get_next_line(int fd)
{
	char		*ret_str;
	static char	*trash_str;

	ret_str = NULL;
	// si trash contiens '\n' -> on enleve jusqua '\n' et on retourne ca
	// si trash contiens pas de '\n' -> ret_str = trash && trash = NULL free(trash)
	// si trash = NULL on procede normalement
	if (!ret_str) // gerer le cas si ret_str contiens '\n' on retourne ret_str on met le rest dans trash
	{
		ret_str = my_read(fd, BUFFER_SIZE);
		if (!ret_str)
			return (NULL);
	}
	while (!contains_newline(ret_str))
	{
		if (!str_add(&ret_str, my_read(fd, BUFFER_SIZE)))
			return (NULL);
	}
	return (ret_str);
}
