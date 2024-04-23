
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}

// Stringin belirli bir kısmını sansürlüyoruz.
//Bu işlev, belirtilen bir bellek bloğunun belirli bir bayt değeri ile doldurulmasını sağlar.