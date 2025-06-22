/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:37:49 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/18 11:39:09 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*void	ft_putstr(char *arr)
{
	while(*arr)
	{
		write(1, arr++, 1);
	}
}

int	main(void)
{
	char	dest[10] =  "Hello, ";
	char    src[] = "World. ";
	ft_putstr(ft_strncat(dest, src, 3));
	return (0);
}*/
