
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = -1;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[++h] && h < len)
	{
		n = 0;
		while (haystack[h + n] == needle[n] && haystack[h + n]
			&& h + n < len)
			n++;
		if (!needle[n])
			return ((char *)haystack + h);
	}
	return (0);
}

// Strnstr , bir dizenin içinde bir alt dizeyi ararken, belirli bir maksimum karakter sayısı ile sınırlanabilir.
// strnstr, haystack dizesindeki needle alt dizisini arar ve bulursa, needle dizisinin başlangıcının işaretini döndürür. 
//Eğer needle dizisi bulunmazsa veya haystack_len parametresi nedeniyle belirtilen maksimum karakter sayısını aşarsa, NULL işaretçisini döndürür.


/* #include <stdio.h>

int main()
{
	const char haystack[] = "Mehmet";
	const char needle[] = "emin";

	printf("%s", ft_strnstr(haystack, needle, 10));
}
*/