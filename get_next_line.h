/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:54:35 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/12/01 19:46:28 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

char	*readfile(int fd, char *temp, int *adv);
char	*cut_temp(char *temp, char *line);
char	*cut_line(char *line);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*getnew(int s1len, int s2len);
int		ft_strlen(char *str);
char	*ft_strdup(const char *s1);
int		find_nl(char *temp);
void	cleanup(char *s1, char *s2);

#endif
