
#include "libft.h"

char	*ft_strrchr(const char *s, char c)
{
	int	i;

	i = ft_strlen(s) + 1;
	while (--i >= 0)
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	return (0);
}

// hangi karakteri arıyorsam onun konumunu döndürüyor.

  /* #include <stdio.h>
int main()
{
	const char s[] = "Mehmet";
	char c = 'a';
	printf("%s", ft_strrchr(s,c));
}
*/