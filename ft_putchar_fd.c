/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:46:45 by bbosnak           #+#    #+#             */
/*   Updated: 2023/01/03 17:46:46 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main(void)
{
	int	fd;
	int fd2;

	fd2 = open("b.txt", O_WRONLY | O_CREAT, 0666);
	fd = open("deneme.txt", O_WRONLY | O_CREAT, 0666);
	printf("%d\n", fd);
	ft_putchar_fd('b', fd);
} */