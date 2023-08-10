/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:15:37 by mloureir          #+#    #+#             */
/*   Updated: 2023/08/01 12:15:38 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int ft_iterative_power(int nb, int power);

#include <stdio.h>

int main()
{
	int nb = 2;
	int power = 3;
	printf("%d", ft_iterative_power(nb, power));
}*/

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		ans = ans * nb;
		power--;
	}
	return (ans);
}
