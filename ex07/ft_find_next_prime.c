/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:18:26 by mloureir          #+#    #+#             */
/*   Updated: 2023/08/03 10:18:30 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int ft_find_next_prime(int nb);

int main()
{
	printf("%d", ft_find_next_prime(0));
}*/
int	ft_is_prime(int nb)
{
	int	i;
	int	cont;

	cont = 0;
	i = 1;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			cont++;
		i++;
	}
	if (cont == 1)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	cont;

	cont = ft_is_prime(nb);
	if (cont == 1)
		return (nb);
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
