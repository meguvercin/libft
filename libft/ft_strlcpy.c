
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// srcyi destin üzerine kopyalar.

/* #include <stdio.h>
int main()
{
	char dest[] = "Mehmet";
	char src [] = "Emin";
	printf("%lu, %s", ft_strlcpy(dest, src, 4), dest);
}
*/