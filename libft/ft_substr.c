
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, (char *)s + start, len + 1);
	return (substr);
}
// Substr, bir karakter dizisinin başlangıç pozisyonunu ve uzunluğunu belirttiğinizde, bu karakter dizisinden belirtilen alt dizeyi almanıza olanak tanır.
// s = substringin oluşturacağı string , start = s'in başlangıç indexi, len= s 'in max uzunluğu.


/*#include <stdio.h>
int main()
{
	const char s[] = "Mehmet";
	printf("%s", ft_substr(s, 3, 10));

}
*/