#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(Value) ft_abs(&Value)
#endif

int	ft_abs(int *x)
{
	if (*x < 0)
		return (-x);
	return (x);
}
