/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:51:04 by mloureir          #+#    #+#             */
/*   Updated: 2023/08/01 15:51:05 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int ft_recursive_power(int nb, int power);

#include <stdio.h>

int main()
{
	int nb = 2;
	int power = 30;
	printf("%d", ft_recursive_power(nb, power));
}*/
int	ft_recursive_power(int nb, int power)
{
	int	ans;

	ans = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (ans);
}
