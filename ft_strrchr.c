/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:42:06 by yu-chen           #+#    #+#             */
/*   Updated: 2023/11/20 20:32:42 by yu-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + len);
	while (s[len] != (unsigned char)c && len > 0)
		len--;
	if (s[len] == (unsigned char)c)
		return ((char *)&s[len]);
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	char    str[] = "Hello!";
        printf("%s", ft_strrchr(str, 'l'));
}*/
