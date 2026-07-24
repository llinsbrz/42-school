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

int	ft_isalpha(int c)
{
	if (!((c >= 'A' && c <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z')))
	{
		return (0);
	}
	return (1);
}

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
	{
		return (0);
	}
	return (1);
}

int	ft_isalnum(int c)
{
	if (!(c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
	return (1);
}

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (1);
}

int	ft_isprint(int c)
{
	if (!(c >= 32 && <= 126))
		return(0);
	return(1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;

	while(str[i])
	{
	i++;
	}
	return(i);
}