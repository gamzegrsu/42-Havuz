/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagursu <gagursu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:32:04 by gagursu           #+#    #+#             */
/*   Updated: 2024/09/04 12:32:08 by gagursu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*sonuc;
	int		i;
	int		x;
	int		c;

	sonuc = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		x = 0;
		while (strs[i][x] != '\0')
		{
			sonuc[c++] = strs[i][x++];
		}
		x = 0;
		while (sep[x] != '\0' && i != size - 1)
		{
			sonuc[c++] = sep[x++];
		}
		i++;
	}
	sonuc[c] = '\0';
	return (sonuc);
}
