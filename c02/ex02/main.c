#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char *p_alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *p_spe = "ABC abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* wxyz WXYZ";
	char *p_emp = "";


	printf("-----\n1 = String contains only alphabetical chars\n0 = String doesn't contain only alphabetical chars\n\n");
	printf("%s = %d\n", p_alp, ft_str_is_alpha(p_alp));
	printf("%s = %d\n", p_spe, ft_str_is_alpha(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_alpha(p_emp));

	return (0);
}