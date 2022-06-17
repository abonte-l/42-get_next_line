/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 17:19:56 by abonte-l          #+#    #+#             */
/*   Updated: 2020/02/05 20:26:36 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# define ERROR -1
# define END_OF_FILE 0
# define ONE_LINE_READ 1

int		get_next_line(int fd, char **line);

char	*ft_strdup(char *src);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strcat(char *dest, const char *src);

size_t	ft_strlen(const char *str);

#endif
