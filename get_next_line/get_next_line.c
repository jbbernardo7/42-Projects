/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:28:41 by jbelece-          #+#    #+#             */
/*   Updated: 2025/05/28 14:47:44 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buffer;
	int		bytesRead;

	buffer = malloc(1);
	if (!buffer)
		return (NULL);
	bytesRead = read(fd, buffer, 1);

	return (buffer);
}

#include <fcntl.h>
#include <stdio.h>
int	main(void)
{
	int fd = open("test.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Error with open()");
		return (1);
	}
	printf("Line: %s", get_next_line(fd));
	printf("\nLine: %s", get_next_line(fd));
	printf("\nLine: %s", get_next_line(fd));
	printf("\nLine: %s", get_next_line(fd));

	return (0);
}
