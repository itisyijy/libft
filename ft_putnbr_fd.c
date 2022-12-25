/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongyle <jeongyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:18:03 by jeongyle          #+#    #+#             */
/*   Updated: 2022/12/21 21:12:35 by jeongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_int(int nb, long long digit, int fd)
{
	char	c;

	if (nb == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	while (digit / 10 > 0)
	{
		digit = digit / 10;
		c = '0' + (nb / digit);
		write(fd, &c, 1);
		nb = nb % digit;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int			tmp;
	long long	digit;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	tmp = n;
	digit = 1;
	while (tmp > 0)
	{
		tmp = tmp / 10;
		digit = digit * 10;
	}
	print_int(n, digit, fd);
}
