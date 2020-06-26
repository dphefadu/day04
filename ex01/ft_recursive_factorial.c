/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphefadu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:52:02 by dphefadu          #+#    #+#             */
/*   Updated: 2020/06/26 14:44:12 by dphefadu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>
 #include <stdlib.h>
 #include<stdio.h> 
	void ft_putchar(char c)
	{
		write(1, &c, 1);
	}

int ft_recursive_factorial(int nb)
{
	if(nb  == 0)
		return(1);
	else
		//int nbs = ft_recursive_factorial(nb -1);
	//	ft_putchar(nb *ft_recursive_factorial(nb - 1));
		return(nb * ft_recursive_factorial(nb - 1));
}

	int main()
	{
		int i;
		i = ft_recursive_factorial(5) ;
		//ft_putchar(ft_recursive_factorial(5 + '0'));
		printf("%d",i);
		return 0;
	}

