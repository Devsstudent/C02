#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int runner;

	runner = 0;
	while (runner < n)
	{
		*dest = *src;
		dest += 1;
		src += 1;
		++runner;
	}	
	return (dest);
}

int	main(void)
{
	char	str[5];
	char	str2;

	ft_strncpy(str, "yay", sizeof(str));
	printf("%s", str);
}
