
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
	{
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}

// stringin belli bir kısmından sonraki kısmını alıyor.
//const chat da bir değişiklik yapamadığımız için onu chara dönüştürmek zorundayız.

 /* #include <stdio.h>
int main()
{
	const char s[] = "Mehmet";
	int c = 'e';
	printf("%s", ft_strchr(s, c));
}
*/