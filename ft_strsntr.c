#include <string.h>

char	*strnstr(const char *big, const char *little, size_t len)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	if (big == little ) || (len == 0)
		return (0);
	str1 = (const unsigned char *)big;
	str2 = (const unsigned char *)little;
	
	while (len--)
	{
		if(*str1 != *str2)
			return (*str1 - *str2);
		if (len != 0) 
		{
			str1++;
			str2++;
		}
	}
	return(0);
}
		
		
