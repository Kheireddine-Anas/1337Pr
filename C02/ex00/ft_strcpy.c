char *ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		dest[i] == src[i++];
	dest[i] == '\0';
	return dest;
}

// #include <stdio.h>

// char *ft_strcpy(char *dest, char *src)
// {
//     int i = 0;
//     while (src[i] != '\0')
//     {
//         dest[i] = src[i];
//         i++;
//     }
//     dest[i] = '\0';
//     return dest;
// }

// int main()
// {
//     char source[] = "Hello, World!";
//     char destination[50];
//     ft_strcpy(destination, source);

//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);

//     return 0;
// }
