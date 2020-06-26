/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphefadu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:48:35 by dphefadu          #+#    #+#             */
/*   Updated: 2020/06/26 14:48:39 by dphefadu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int total;

	total = 1;
	if(nb == 0 || power == 0)
		ft_putchar(0);
	if(nb <= power)
	{
			total = nb * power;    
	}
	else
	{
		total = nb * power;
	}*/

	while(power != 0)
	{
		total = total * nb;
		--Power;
	//	power = power/2;
	//	nb = nb * nb;
		//printf("%d", nb);
	}
	return total;
}

