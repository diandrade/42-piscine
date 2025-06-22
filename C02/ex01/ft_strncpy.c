/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <diandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:12:00 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/17 18:03:16 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putstr(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		write(1, &src[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "String";
	char	dest[7];

	ft_strncpy(dest, src, 5);
	dest[5] = '\0';
	ft_putstr(dest);
	return (0);
}*/
