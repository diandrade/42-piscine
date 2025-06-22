/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <diandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:21:47 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/19 14:47:09 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int     main(void)
{
        char    s1[] = "";
	char	s2[] = "S";
	printf("%d", ft_strncmp(s1, s2, 10));
        return (0);
}*/
