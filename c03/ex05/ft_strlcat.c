unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0' && n < size)
	{
		dest[i++] = src[n++];
	}
	dest[i] = '\n';
	return (i);
}
