/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpuscedd <gpuscedd@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:31:13 by gpuscedd          #+#    #+#             */
/*   Updated: 2024/03/06 17:39:36 by gpuscedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//uno strcat modificato, se trova una newline interrompe
//se la new line non è l'ultimo elemento del buffer salva
//il resto all'inizio del buffer
void	ft_strcat_gnl(char *dst, char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	i = ft_strlen(dst);
	while (src[j])
	{
		dst[i + j] = src[j];
		src[j] = '\0';
		j++;
		if (dst[i + j - 1] == '\n')
			break ;
	}
	if (src[j])
		ft_strcat(src, src + j);
}

//fa l'append della stringa src sulla stringa dst
//che deve avere abbastanza "slots", pulisce la stringa src e
//termina dest con un '\0'
void	ft_strcat(char *dst, char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	i = ft_strlen(dst);
	while (src[j])
	{
		dst[i + j] = src[j];
		src[j] = '\0';
		j++;
	}
	dst[i + j] = '\0';
}

//alloca una zona di memoria inizializzando ogni byte a null
void	*ft_calloc(size_t num, size_t size)
{
	size_t	i;
	size_t	total;
	void	*out;

	i = 0;
	total = num * size;
	if (num && size && size > (UINT_MAX / num))
		return (NULL);
	out = malloc(total);
	while (i < total)
		((unsigned char *)out)[i++] = '\0';
	return (out);
}

//ricerca la posizione di un carattere in una stringa
//se lo trova ritorna un pointer alla posizione
//se non lo trova ritorna NULL
char	*ft_strchr(char *s, int c)
{
	size_t	i;

	i = 0;
	while (s && s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}

//scorre una stringa e conta i caratteri
//ritorna il numero di caretteri, '\0' 
int	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}
