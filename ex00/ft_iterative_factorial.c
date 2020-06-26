/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphefadu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:08:49 by dphefadu          #+#    #+#             */
/*   Updated: 2020/06/26 10:05:06 by dphefadu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_iterative_factorial(int nb)
{	
	int j;
	int fact;
	fact = 1;
	j = 1;
	if (nb < 0)
	{
		return 0;
	}else
   	{

		while (j <= nb)
		{
			fact = fact * (j);
			j ++;
		}
	}	
	return fact;
}






