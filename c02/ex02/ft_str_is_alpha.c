/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaska <skaska@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:05:30 by skaska            #+#    #+#             */
/*   Updated: 2023/04/08 14:05:32 by skaska           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	a ;

	a = 0 ;
	while (str[a] != '\0')
	{
		if ((str[a] < 'A' ) || (str[a] > 'Z' && str[a] < 'a') || (str[a] > 'z'))
			return (0);
		a++ ;
	}
	return (1);
}
