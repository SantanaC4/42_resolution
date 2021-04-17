void ft_putstr_non_printable(char *str);

int main (void)
{
	char c[] = "Oi\voce\aesta\bem?";

	ft_putstr_non_printable(c);
	return (0);
}