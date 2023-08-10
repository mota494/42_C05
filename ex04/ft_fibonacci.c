/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:52:41 by mloureir          #+#    #+#             */
/*   Updated: 2023/08/01 18:52:41 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int ft_fibonacci(int index);

#include <stdio.h>

int main()
{
	printf("%d", ft_fibonacci(5));
}*/
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
