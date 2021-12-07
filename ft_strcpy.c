#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, const char *src)
{
	char *banane;
	banane = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (banane);
}

int main(int argc, char **argv)
{
	printf("%s-----%s", strcpy(argv[1], argv[2]), ft_strcpy(argv[3],argv[4]));
}
