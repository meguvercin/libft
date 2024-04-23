
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	chr;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == chr)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}
// const void *s olan fonksiyona burada const char s gönderebiliyoruz.
/* #include <stdio.h>
int main()
{
	const char s[] = "Mehmet";
	int c = 't';
	printf("%c", *(char *)ft_memchr(s,c,6));
}
*/
// c'nin ilk örneği için s'nin ilk n baytını tarar.