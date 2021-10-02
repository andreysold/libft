#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{	
	int		num;
	char	s[10];

	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	if (n == 0)
		return (ft_putchar_fd('0', fd));
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	num = 0;
	while (n > 0)
	{
		s[num] = n % 10 + '0';
		n = n / 10;
		num++;
	}
	num--;
	while (num >= 0)
	{
		ft_putchar_fd(s[num], fd);
		num--;
	}
}
