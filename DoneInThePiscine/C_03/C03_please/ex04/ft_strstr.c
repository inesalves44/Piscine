/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:59:06 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/01 12:12:02 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	z;
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		z = 0;
		while (str[i + z] != '\0' && str[i + z] == to_find[z])
		{
			if (to_find[z + 1] == '\0')
				return (&str[i]);
			z++;
		}
		i++;
	}
	return (0);
}
int	main()
{
	const char s3[] = "origninal";
	const char s4[] = "in";
	char s1[] = "origninal";
	char s2[] = "in";

	printf("The substring in the function is: %s\n", strstr(s3, s4));
	printf("the substring in my program is: %s", ft_strstr(s1, s2));
   	return(0);
}
