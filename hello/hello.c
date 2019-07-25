/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 18:22:13 by exam              #+#    #+#             */
/*   Updated: 2019/07/05 18:30:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_str(char *str_v)
{
	int i;
	char next_lign;

	next_lign = '\n';
	i = 0;
	while (str_v[i] != '\0')
	{
		write(1, &str_v[i], 1);
		i++;
	}
	write(1, &next_lign, 1);
}

int main()
{
	print_str("Hello World!");
}
