/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:04:31 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/07 17:43:02 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int	main(void)
{
	int num1, num2;

	num1 = 20;
	num2 = 10;

	ft_ultimate_div_mod(&num1, &num2);

	printf("%d\n", num1);
	printf("%d\n", num2);
}*/
