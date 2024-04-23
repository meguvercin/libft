

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	d;

	d = ft_strlen(dst);
	j = 0;
	i = 0;
	if (dstsize <= d)
		return (dstsize + ft_strlen(src));
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && j < dstsize - d - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (d + ft_strlen(src));
}
// burada kopyalama yapıyoruz ancak sonunda ekliyoruz burada yani mehmetin sonuna emini ekliyoruz.
/* #include <stdio.h>

int main()
{
	char dest[] = "Mehmet";
	char src [] = "Emin";
	printf("%lu, %s", ft_strlcat(dest, src, 10), dest);
}
*/
