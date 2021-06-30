#include <stdio.h>
int	ft_is_part(char *str, char *to_find)
{
	int	f;
	int	k;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		f = 0;
		k = i;
		while (to_find[f] != '\0')
		{
			if (to_find[f] == str[k])
			{
				f++;
				k++;
			}
			else
				break ;
		}
		if (to_find[f] == '\0')
			break ;
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = ft_is_part(str, to_find);
	if (str[i] == '\0')
		return (NULL);
	n = 0;
	while (str[i] != 0)
		str[n++] = str[i++];
	str[n] = '\0';
	return (str);
}
