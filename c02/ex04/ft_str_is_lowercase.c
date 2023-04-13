/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaska <skaska@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:28:44 by skaska            #+#    #+#             */
/*   Updated: 2023/04/08 14:28:47 by skaska           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	a ;

	a = 0 ;
	while (str[a] != '\0')
	{
		if ((str[a] < 'a') || (str[a] > 'z'))
			return (0);
		a++;
	}
	return (1);
}
