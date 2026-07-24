/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtf.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucolive <lucolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 19:27:47 by lucolive          #+#    #+#             */
/*   Updated: 2026/07/23 19:27:47 by lucolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

int	ft_isdigit(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}