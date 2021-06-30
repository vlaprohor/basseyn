char 	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0' && n < nb)
	{
		dest[i++] = src[n++];
	}
	dest[i] = '\n';
	return (dest);
}
