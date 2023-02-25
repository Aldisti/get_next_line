/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-stef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:06:56 by adi-stef          #+#    #+#             */
/*   Updated: 2023/02/05 15:09:18 by adi-stef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_realloc(char *str, char *buff);
char	*ft_getline(char *buffer, int fd);
void	ft_memmove(char *dst, char *src);
char	*ft_first_str(char *buff);
int		ft_nlinstr(char *str);
int		ft_strlen(char *str);
int		ft_getnl(char *str);

#endif
