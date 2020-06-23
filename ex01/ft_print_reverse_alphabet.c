/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 12:53:29 by smosoeu           #+#    #+#             */
/*   Updated: 2020/06/23 12:53:34 by smosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void ft_putchar(char c)

void ft_print_reverse_alphabet(void) {

	char letter;

	letter = 'z';
	while (letter >= 'a') {
		ft_putchar(letter);
		letter--;
	}
}

int main(void) {
	ft_print_reverse_alphabet();
	
}

