/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:37:25 by jodavis           #+#    #+#             */
/*   Updated: 2024/11/22 18:32:03 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int	fd;

	fd = open("text", O_RDONLY);
	printf("%s | ", get_next_line(fd));
	printf("%s | ", get_next_line(fd));
	printf("%s | ", get_next_line(fd));
	printf("%s | ", get_next_line(fd));
	printf("%s | ", get_next_line(fd));
	printf("%s | ", get_next_line(fd));
}
