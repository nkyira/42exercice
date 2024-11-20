/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:07:43 by jodavis           #+#    #+#             */
/*   Updated: 2024/11/19 13:12:09 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#	define GET_NEXT_LINE_H
#	include <stdlib.h>
#	include <unistd.h>
#	include <fcntl.h>
#	ifndef BUFFER_SIZE
#		define BUFFER_SIZE 10
#	endif

char	*get_next_line(int fd);

#endif
