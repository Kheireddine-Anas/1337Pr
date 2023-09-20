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
	return (str);
}

// char *ft_strcapitalize(char *str)
// {
// 	int	i;

// 	i = 0;
// 	ft_strlowcase(str);
// 	if (str[0] >= 'a' && str[0] <= 'z')
// 		str[0] = str[0] - 32;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
// 		{
// 			if (!(str[i] >= '0' && str[i] <= '9'))
// 				str[i + 1] = str[i + 1] - 32;
// 		}
// 		i++;
// 	}
// 	return (str);
// }

char *ft_strcapitalize(char *str)
{
    int i = 0;
    ft_strlowcase(str);

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;

    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
        {
            // i++;
            if (str[++i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
        i++;
    }

    return str;
}


int main()
{
    char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    
    printf("Original: %s\n", test);
    
    char *result = ft_strcapitalize(test);
    
    printf("Lowercase: %s\n", result);

    return 0;
}