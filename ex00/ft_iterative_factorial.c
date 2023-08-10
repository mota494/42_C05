/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:18:30 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/31 16:18:31 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int ft_iterative_factorial(int nb);

#include <stdio.h>

int main()
{
	printf("Factorial: %d",ft_iterative_factorial(-6));
	return (0);
}*/
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	toret;

	toret = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		toret = toret * i;
		i++;
	}
	return (toret);
}
