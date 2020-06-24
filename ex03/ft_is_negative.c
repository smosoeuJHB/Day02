/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:16:40 by smosoeu           #+#    #+#             */
/*   Updated: 2020/06/24 15:07:18 by smosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>

int ft_putchar(char c)
{
   	write(1, &c, 1); }

void ft_is_negative(int n) {
	if (n >= 0) {
		ft_putchar('P');
	}
	else { ft_putchar('N');
	}
}

int main(void) {
	ft_is_negative();
	return 0;
}
		
		

		
	
