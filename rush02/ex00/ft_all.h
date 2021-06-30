#ifndef	FT_ALL_H
# define FT_ALL_H

int		str_cmp(char *s1, char *s2);
char 	*like_atoi(char *str, int *i);
void	dict_failure(void);
char	*make_dict(char *str);
int		dict_check(char *dict);
void	output_result(char *dict, char *num);
int		ft_strlen(char *str);
int		is_space(char c);
void	out(char *s1, char *dict);
void	ft_putstr(char *str);
char	*get_lion(int i);
#endif
