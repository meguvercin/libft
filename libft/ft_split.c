
#include "libft.h"
#include <stdio.h>

char	**malloc_error(char **arr, size_t i)
{
	while (arr[i])
		free(arr[i++]);
	return (free(arr), NULL);
}
static int	word_count(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			while (*s && *s != c)
				s++;
			i++;
		}
	}
	return (i);
}

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	if (!*s)
		return (0);
	while (*s && *s++ != c)
		len++;
	printf("%d", len);
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		a;
	int		i;

	a = -1;
	i = 0;
	res = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!s || !res)
		return (NULL);
	while (++a < word_count(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		res[a] = ft_substr(s, i, word_len(&s[i], c));
		if (!res[a])
			return (malloc_error(res, 0));
		i += word_len(&s[i], c);
	}
	return (res[a] = NULL, res);
}

// s: bölünecek string, c: ayırıcı karakterler
// ilk başta res için wordlen fonksiyonunu kullanıyoruz bu s nin içinde kaç tane c var onu saymamızı sağlıyor ve ondan iki fazla kadar bayt ayırmamızı sağlıyor.
// sonra res[a] ya s nin i den sonraki kısmında max s nin uzunluğununun sonuna kadar atıyoruz.
#include <stdio.h>

int main()
{
	char const s[] = "MehmetEmin Guvercin IN LONDON FORh ENTERTAINMENT nanannaan";
	char c = 'h';

	printf("%s", *ft_split(s, c));

}