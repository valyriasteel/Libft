/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:46:36 by bbosnak           #+#    #+#             */
/*   Updated: 2023/01/03 17:46:38 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
		while (s[i])
			write (fd, &s[i++], 1);
}

/* int	main(void)
{
	int	fd;
	fd = open("deneme.txt", O_WRONLY | O_CREAT, 0666);
	ft_putstr_fd("berat", fd);
} */