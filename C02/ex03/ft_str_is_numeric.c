/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaska <skaska@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:28:06 by skaska            #+#    #+#             */
/*   Updated: 2023/04/08 14:28:09 by skaska           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	k ;

	k = 0 ;
	while (str[k] != '\0')
	{
		if ((str[k] < '0') || (str[k] > '9'))
			return (0);
			k++ ;
	}
	return (1);
}
