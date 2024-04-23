
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*val;

	val = (char *)malloc(ft_strlen(s1) + 1);
	if (!val)
		return (0);
	ft_memcpy(val, s1, ft_strlen(s1) + 1);
	return (val);
}

// stringin yerini pointere vermek.
/* strdup fonksiyonu, aşağıdaki işlemleri gerçekleştirir:

1)Verilen karakter dizisinin uzunluğunu hesaplar.
2)Hafızada bu uzunluk kadar yeni bir bellek alanı ayırır.
3)Verilen karakter dizisini bu yeni bellek alanına kopyalar.
4)Kopyalanan karakter dizisinin bir işaretçisini döndürür.
*/

/* #include <stdio.h>
int main()
{
	char *a = "mehmet";
	char *b = ft_strdup(a);
	printf("%s",b);
}
*/