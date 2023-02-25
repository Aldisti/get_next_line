/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-stef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:39:40 by adi-stef          #+#    #+#             */
/*   Updated: 2023/02/01 16:06:52 by adi-stef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_get_first_str(char *buff);
char	*ft_realloc(char *str, char *buff);
void	ft_memmove(char *dst, char *src);
int		ft_getnl(char *str);
int		ft_strlen(char *str);
int		ft_nlinstr(char *str);

#endif
