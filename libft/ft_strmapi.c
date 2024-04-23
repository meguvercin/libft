
#include "libft.h"

/* char to_upper(unsigned int index, char c) 
{
    if (index) 
	{  // İndeks çift sayı ise karakteri büyük harfe dönüştür
        if (c >= 'a' && c <= 'z') {
            return c - 32; // Küçük harfi büyük harfe dönüştür
        }
    }
    return c; // Diğer durumlarda karakteri değiştirmeden geri döndür
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>
//strmapi fonksiyonu, C dilinde standart kütüphane içerisinde yer almayan, genellikle bir programcı veya bir kütüphane tarafından özelleştirilmiş bir fonksiyondur. 
//Bu fonksiyon, bir giriş metnini (string) eleman eleman dolaşarak her bir karakter üzerinde belirli bir dönüşüm işlemi yapar ve bu dönüşümlü karakterleri içeren yeni bir dizi oluşturur.
/* int main()
{
	const char *text = "Hello, World!";
    char *result = ft_strmapi(text, &to_upper);
	printf("Original: %s\n", text);
    printf("Mapped  : %s\n", result);
	free(result); 
}
*/
