/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:17:01 by mclerico          #+#    #+#             */
/*   Updated: 2021/09/21 19:22:12 by mclerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

int		ft_len(char *p);
char	*get_line(char *line);
int		newline(char *line);
void	*ft_memmove(void *dest, const void *src, int n);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
#endif
