/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:51:31 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/07 17:40:20 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

/*int	main(void)
{
	int a, b;

	a = 10;
	b = 20;

	printf("Antes do Swap\n");
	printf("%d\n", a);
	printf("%d\n", b);

	ft_swap(&a, &b);

	printf("Depois do Swap\n");
	printf("%d\n", a);
	printf("%d\n", b);
}*/
