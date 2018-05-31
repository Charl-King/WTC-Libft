#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	char	*str;
	int	i;

	if (s && f)
	{
		i = 0;
		str = (char *)malloc((ft_strlen(char *)s) * sizeof(str));
		while (s[i] != 0)
		{
			str[i] = f(s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);

