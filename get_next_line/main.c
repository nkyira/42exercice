/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:37:25 by jodavis           #+#    #+#             */
/*   Updated: 2024/12/11 06:43:52 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int	fd;
	char	*nextline;

	fd = open("get_next_line.c", O_RDONLY);
	nextline = get_next_line(fd);
	printf("----------------------\n\n%s\n\n", nextline);
	free(nextline);
	nextline = get_next_line(fd);
	printf("----------------------\n\n%s\n\n", nextline);
	free(nextline);
	nextline = get_next_line(fd);
	printf("----------------------\n\n%s\n\n", nextline);
	free(nextline);
}
