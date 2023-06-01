/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:53:39 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/11/28 11:33:32 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	cleanup(char *s1, char *s2)
{
	free(s1);
	s1 = NULL;
	free(s2);
	s2 = NULL;
	return ;
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen((char *)s1);
	dup = (char *)malloc(sizeof(char) * len + 1);
	if (dup == NULL)
		return (NULL);
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*getnew(int s1len, int s2len)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * (s1len + s2len) + 1);
	if (new == NULL)
		return (NULL);
	return (new);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		s1l;
	int		s2l;
	int		i;
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	new = getnew((s1l = ft_strlen((char *)s1)), (s2l = ft_strlen((char *)s2)));
	if (new == NULL)
		return (NULL);
	while (i < s1l)
	{
		new[i] = s1[i];
		i++;
	}
	while (i < s1l + s2l)
	{
		new[i] = s2[i - s1l];
		i++;
	}
	new[i] = '\0';
	cleanup(s1, s2);
	return (new);
}
