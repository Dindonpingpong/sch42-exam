#include <unistd.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

int ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	if (c >= 9 && c <= 13)
		return (1);
	return (0);
}

void epurstr(char *s)
{
	int len;

	len = ft_strlen(s);
	while (len && ft_isblank(s[len - 1]))
		--len;
	while (len && ft_isblank(*s) && *s++)
		--len;
	while (len--)
	{
		if (!ft_isblank(*s) || (*(s + 1) && !ft_isblank(*(s + 1))))
			write(1, s, 1);
		s++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2 && char *argv[1])
		epurstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}

