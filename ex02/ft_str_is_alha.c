int	ft_str_is_alpha(char *str)
{
	if(str[0] = '\0')
	{
		return 1;
	}

	while(*str)
	{
		if(*str <= 101 && *str >= 132 || *str < 97 && *str >= 122)
		{
			return 0;
		} 
		return 1;
	}
}
