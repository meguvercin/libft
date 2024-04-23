
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((char)str1[i] - (char)str2[i]);
		i++;
	}
	return (0);
}

//Bellek bölgelerini karşılaştırır. mantık olarak strncmp ile aynı.
//Memcmp ise daha genel bellek bloklarının içeriğini karşılaştırmak için kullanılır 
//ve karakter dizilerinin ötesinde kullanılabilir. 
/*
#include <stdio.h>
int main()
{
	char *a = "mehmet";
	char *b = "mehmea";
	
	printf("%d", ft_memcmp(a,b,6));
}
*/