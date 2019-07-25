/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 18:34:01 by exam              #+#    #+#             */
/*   Updated: 2019/07/05 18:49:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** a - A = 32
** z = 122, a = 97
*/

void put_char (char c)
{
	write(1, &c, 1);
}

int main ()
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		if (letter % 2 == 0)
		{
			put_char(letter);
		}
		else
		{
			put_char(letter - 32);
		}
		letter--;
	}
	put_char('\n');
}
