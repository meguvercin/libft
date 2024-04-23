
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
// stringleri karşılaştırıyor ve ascii değerine göre farkını alıyor.
//burada unsinged char kullandık çünkü oluşabilecek hataları(negatiflik gibi) ve veri kaybını önlemek için.

/* #include <stdio.h>
int main()
{
	const char s1[] = "Mehmet";
	const char s2[] = "Mehmes";

	printf("%d", ft_strncmp(s1, s2, 10));
}
*/ 