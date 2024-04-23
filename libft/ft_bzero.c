
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

//stringin belli bir kısmını sansürlüyor.
//Bu işlev, belirtilen bellek bloğunu sıfırlar, yani tüm baytları 0 değeriyle doldurur. 