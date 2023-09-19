int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
        return 1;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
int main()
{
    char *test1 = "";                // Empty string
    char *test2 = "HelloWorld";      // Contains only alphabetic characters.
    char *test3 = "12345";           // Contains only non-alphabetic characters.
    char *test4 = "Hello123";        // Contains a mix of alphabetic and non-alphabetic characters.
    char *test5 = " ";               // Contains a space character.
    char *test6 = NULL;              // NULL input

    printf("Test 1: \"%s\" - Result: %d\n", test1, ft_str_is_alpha(test1));
    printf("Test 2: \"%s\" - Result: %d\n", test2, ft_str_is_alpha(test2));
    printf("Test 3: \"%s\" - Result: %d\n", test3, ft_str_is_alpha(test3));
    printf("Test 4: \"%s\" - Result: %d\n", test4, ft_str_is_alpha(test4));
    printf("Test 5: \"%s\" - Result: %d\n", test5, ft_str_is_alpha(test5));
    printf("Test 6: NULL - Result: %d\n", ft_str_is_alpha(test6));

    return 0;
}