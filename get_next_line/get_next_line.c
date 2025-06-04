/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:28:41 by jbelece-          #+#    #+#             */
/*   Updated: 2025/06/03 22:44:49 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*process_queue(char *queue)
{
	size_t	size;
	char	*start_new_queue;
	char	*str;
	char	*new_queue;

	size = ft_linelen(queue);
	start_new_queue = queue + size;
	if (!(*start_new_queue))
	{
		free(queue);
		return (NULL);
	}
	size = ft_strlen(start_new_queue);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	new_queue = str;
	while (*start_new_queue)
		*str++ = *start_new_queue++;
	*str = '\0';
	free(queue);
	return (new_queue);
}

static char	*retrieve_line(char *queue)
{
	char	*str;
	char	*line;
	size_t	size;

	size = ft_linelen(queue);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	line = str;
	while (size--)
		*str++ = *queue++;
	*str = '\0';
	return (line);
}

static char	*read_line(int fd, char *queue)
{
	char	*buffer;
	ssize_t	bytes_read;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	buffer[0] = '\0';
	bytes_read = 42;
	while (!ft_strchr(buffer, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
		{
			free(queue);
			free(buffer);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		if (bytes_read != 0)
			queue = ft_queuejoin(queue, buffer);
	}
	free(buffer);
	return (queue);
}

char	*get_next_line(int fd)
{
	static char	*queue;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	queue = read_line(fd, queue);
	if (!queue || !(*queue))
	{
		free(queue);
		return (NULL);
	}
	line = retrieve_line(queue);
	queue = process_queue(queue);
	return (line);
}

// #include <fcntl.h>
// #include <stdio.h>
// int main(void)
// {
// 	int 	i;
// 	char	*str;
// 	int 	fd = open("test.txt", O_RDONLY);

// 	if (fd < 0)
// 	{
// 		printf("Error with open()");
// 		return (1);
// 	}
// 	i = 0;
// 	printf("Running...");
// 	while ((str = get_next_line(fd)))
// 	{
// 		printf("\nLine %d: \n>%s<", ++i, str);
// 		free(str);
// 	}
// 	close(fd);
// 	return (0);
// }
