/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathisaujogue <mathisaujogue@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:39:35 by maujogue          #+#    #+#             */
/*   Updated: 2023/05/16 13:24:31 by mathisaujog      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*s2;
	size_t		len;
	size_t		i;

	if (!(s1))
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	s2 = malloc(sizeof(char) * (len + 1));
	if (!(s2))
		return (NULL);
	while (s1 && s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
