/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:03:14 by bbosnak           #+#    #+#             */
/*   Updated: 2022/12/27 19:03:16 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0 || num < 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*array;
	long	nbr;

	nbr = n;
	i = ft_numlen(nbr);
	if (n < 0)
	{
		i++;
		nbr = -nbr;
	}
	array = malloc(sizeof(char) * i + 1);
	if (!array)
		return (NULL);
	array[i] = '\0';
	while (nbr > 0)
	{
		array[--i] = nbr % 10 + 48;
		nbr /= 10;
	}
	if (n < 0)
		array[0] = '-';
	if (n == 0)
		array[0] = '0';
	return (array);
}

/* int	main(void)
{
    printf("%s\n", ft_itoa(-23425));
} */