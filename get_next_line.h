/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpuscedd <gpuscedd@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:06:03 by gpuscedd          #+#    #+#             */
/*   Updated: 2024/03/05 21:06:04 by gpuscedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 3
#endif

char	*get_next_line(int fd);
char 	*line_realloc(char *old_line);

void	ft_strcat_gnl(char *dst, char *src);
void	ft_strcat(char *dst, char *src);
void	*ft_calloc(size_t num, size_t size);
char	*ft_strchr(char *s, int c);
int		ft_strlen(char *s);

#endif