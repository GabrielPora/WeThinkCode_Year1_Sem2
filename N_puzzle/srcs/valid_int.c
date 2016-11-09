/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggroener <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:00:46 by ggroener          #+#    #+#             */
/*   Updated: 2016/11/09 12:00:47 by ggroener         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "npuzzle.h"

int		valid_int(char *str)
{
	if (str[0] == '-')
	{
		if (ft_strlen(str) > 11)
			return (0);
	}
	else if (ft_strlen(str) > 10)
		return (0);
	if (ft_atol(str) > INT_MAX || ft_atol(str) < INT_MIN)
		return (0);
	return (1);
}
