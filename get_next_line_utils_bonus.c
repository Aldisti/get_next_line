/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-stef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:08:42 by adi-stef          #+#    #+#             */
/*   Updated: 2023/02/06 09:14:23 by adi-stef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line_bonus.h"

char	*ft_first_str(char *buff)
{
	char	*str;
	int		i;
	int		len;
	int		j;

	len = ft_getnl(buff);
	str = (char *) malloc((len + 1) * sizeof (char));
	if (!str)
		return (0);
	str[len] = 0;
	i = 0;
	j = 0;
	while (i < len)
		str[i++] = buff[j++];
	ft_memmove(buff, buff + j);
	return (str);
}

void	ft_memmove(char *dst, char *src)
{
	size_t	i;

	i = 0;
	while (*src && i <= BUFFER_SIZE)
	{
		dst[i++] = *src;
		src++;
	}
	while (dst[i] && i <= BUFFER_SIZE)
		dst[i++] = 0;
}

int	ft_getnl(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != 10)
		i++;
	if (str[i] == 10)
		i++;
	return (i);
}

int	ft_nlinstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == 10)
			return (1);
	}
	if (str[i] == 10)
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
