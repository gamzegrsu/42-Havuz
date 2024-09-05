/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagursu <gagursu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:24:43 by gagursu           #+#    #+#             */
/*   Updated: 2024/09/03 13:24:49 by gagursu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;
	int	arg;

	arg = 1;
	while (arg < argc)
	{
		index = 0;
		while (argv[arg][index] != '\0')
		{
			write(1, &argv[arg][index], 1);
			index++;
		}
		write(1, "\n", 1);
		arg++;
	}
}
