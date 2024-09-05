/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagursu <gagursu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:07:41 by gagursu           #+#    #+#             */
/*   Updated: 2024/08/20 19:08:57 by gagursu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alph;

	alph = 'z';
	while (alph >= 'a')
	{
		write(1, &alph, 1);
		alph--;
	}
}
