/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:00:56 by mloureir          #+#    #+#             */
/*   Updated: 2023/08/06 11:33:58 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb);

int main()
{
	printf("%d\n",ft_sqrt(1739485865));
	printf("%d\n",ft_sqrt(1739485865));
	printf("%d\n",ft_sqrt(1739485865));
	printf("%d\n",ft_sqrt(__INT_MAX__));
	printf("%d\n",ft_sqrt(__INT_MAX__));
	printf("%d\n",ft_sqrt(__INT_MAX__));
	printf("%d\n",ft_sqrt(__INT_MAX__));
	printf("%d\n",ft_sqrt(__INT_MAX__));
	printf("%d\n",ft_sqrt(__INT_MAX__));
}
int	ft_sqrt(int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (nb % 10 == 2 || nb % 10 == 3 || nb % 10 == 7 || nb % 10 == 8)
		return (0);
	while (nb > 0)
	{
		nb = nb - i;
		i = i + 2;
		count++;
	}
	if (nb == 0)
		return (count);
	return (0);
}
