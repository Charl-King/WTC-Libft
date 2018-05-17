

#include "libft.h"

int	ft_atoi(char *str)
{

	int	out;
	int	sign;

	sign = 1;
	out = 0;
	while (ft_isspace(*str))
		++str;
	if (!ft_isdigit(*str))
	{
		if(*str == '-')
			sign = -1;
		else if (*str != '+')
			return (0);
		str++;
	}
	while(ft_isdigit(*str))
		out = out * 10 + (*str++ - '0') * sign;
	return out;
}
