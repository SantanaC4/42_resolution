#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char *p_str = "Normal characters string";
	char *p_unp = "Unprintables: \t (tab), \a (?)";
	char *p_emp = "\r";
	

	printf("-----\n1 = Contains only printable characters\n0 = Contains unprintable characters\n\n");
	printf("%s = %d\n", p_str, ft_str_is_printable(p_str));
	printf("%s = %d\n", p_unp, ft_str_is_printable(p_unp));
	printf("Empty = %d\n-----\n", ft_str_is_printable(p_emp));

	return (0);
}