/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagursu <gagursu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:25:01 by gagursu           #+#    #+#             */
/*   Updated: 2024/09/03 13:25:06 by gagursu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;

	argc -= 1;
	while (argc > 0)
	{
		index = 0;
		while (argv[argc][index])
		{
			write(1, &argv[argc][index], 1);
			index++;
		}
		write(1, "\n", 1);
		argc--;
	}
}
