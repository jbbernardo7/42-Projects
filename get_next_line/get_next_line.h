/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:20:52 by jbelece-          #+#    #+#             */
/*   Updated: 2025/06/03 22:38:39 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20
# endif

char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
size_t	ft_linelen(const char *str);
char	*ft_queuejoin(char *queue, const char *buffer);
char	*get_next_line(int fd);

#endif
