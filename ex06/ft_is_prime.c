/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:44:28 by mloureir          #+#    #+#             */
/*   Updated: 2023/08/02 18:44:28 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
	printf("%d", ft_is_prime(-7));
	return (0);
}*/
int	ft_is_prime(int nb)
{
	int	i;
	int	cont;

	if (nb <= 1)
		return (0);
	cont = 0;
	i = 1;
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
