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

	fd = open("deneme.txt", O_CREAT | O_WRONLY, 0666);
	fd2 = open("deneme2.txt", O_CREAT | O_WRONLY, 0666);
	ft_putchar_fd('b', fd);
	ft_putchar_fd('c', fd2);
	printf("%d | %d\n", fd, fd2);
} */