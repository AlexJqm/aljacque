/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:54:51 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/07 16:07:54 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		if ((str[j] >= 58 && str[j] <= 64) ||
		(str[j] >= 91 && str[j] <= 96) ||
		(str[j] >= 0 && str[j] <= 57) ||
		(str[j] >= 123 && str[j] <= 127))
			return (0);
		j++;
	}
	return (1);
}
