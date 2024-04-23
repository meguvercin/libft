
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	j = ft_strlen(s2);
	i = ft_strlen(s1);
	s3 = (char *)malloc(i + j + 1);
	if (s3 == NULL)
		return (NULL);
	ft_memcpy(s3, s1, i);
	ft_memcpy(s3 + i, s2, j);
	s3[i + j] = '\0';
	return (s3);
}


// s1 = baş string , s2= son string, s3 = yeni oluşturulan string.
// s1 ve s2 stringini sırayla alıp memcpy 'ye gönderdim ve s3 e kopyaladım sonra onu döndürdüm.

/*
#include <stdio.h>
int main()
{
	char const s1[] = "Mehmet";
	char const s2[] = "Emin";

	printf("%s", ft_strjoin(s1, s2));
}
*/