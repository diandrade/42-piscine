/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <diandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:25:58 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/18 11:40:52 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
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
	ft_putstr(ft_strcat(dest, src));
	return (0);
}*/
