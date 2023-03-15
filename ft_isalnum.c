/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:51:38 by bbosnak           #+#    #+#             */
/*   Updated: 2022/12/13 13:41:58 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/* int	main(void)
{
    printf("%d\n", ft_isalnum('2'));
 	printf("%d\n", ft_isalnum('a'));
 	printf("%d", ft_isalnum('/'));
} */