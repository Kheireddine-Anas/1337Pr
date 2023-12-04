#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int main()
{
	char k = '5';
	int c = k;
	printf("%d", ft_isascii(c));
}