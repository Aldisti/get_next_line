/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-stef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:03:57 by adi-stef          #+#    #+#             */
/*   Updated: 2023/02/06 09:32:42 by adi-stef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[4096][BUFFER_SIZE + 1];
	char		*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str = ft_getline(buffer[fd], fd);
	return (str);
}

char	*ft_getline(char *buffer, int fd)
{
	char	*str;
	int		r;

	if (!(*buffer))
		r = read(fd, buffer, BUFFER_SIZE);
	else
		r = ft_strlen(buffer);
	str = ft_first_str(buffer);
	while (r && !ft_nlinstr(str))
	{
		if (!(*buffer))
			r = read(fd, buffer, BUFFER_SIZE);
		if (r <= 0)
			break ;
		str = ft_realloc(str, buffer);
	}
	if (str && *str)
		return (str);
	free(str);
	return (0);
}

char	*ft_realloc(char *str, char *buff)
{
	char	*new;
	int		len;
	int		j;
	int		i;

	len = ft_strlen(str) + ft_getnl(buff);
	new = (char *) malloc ((len + ft_strlen(str) + 1) * sizeof (char));
	if (!new)
		return (0);
	new[len] = 0;
	i = -1;
	while (str[++i])
		new[i] = str[i];
	free(str);
	j = 0;
	while (i < len)
		new[i++] = buff[j++];
	ft_memmove(buff, buff + j);
	return (new);
}
