#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return str;
}


int main()
{
    char test[] = "Hello, World!";
    
    printf("Original: %s\n", test);
    
    char *result = ft_strlowcase(test);
    
    printf("Lowercase: %s\n", result);

    return 0;
}