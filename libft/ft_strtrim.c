
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	j;
	char	*str;
	size_t	i;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}
// s1 = kırpılacak string, set = kırpılması istenen string.
// aynı olan karakterlerin hepsini kırpıyor
//ilk başta baştan karşılaştırıyoruz sonra sondan karşılaştırma yapıyoruz.

/* #include <stdio.h>
int main()
{
	const char s1[]= "ehhhhmmmAMCDtttteeehmet";
	const char s2[] = "hmet";
	printf("%s", ft_strtrim(s1,s2));

}
*/
