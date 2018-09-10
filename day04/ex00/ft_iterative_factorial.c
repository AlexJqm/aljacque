/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 22:13:50 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/03 22:13:59 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int j;

	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	j = 1;
	while (i <= nb)
	{
		j = i * j;
		i++;
	}
	return (j);
}
