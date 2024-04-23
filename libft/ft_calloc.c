
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = malloc(size * count);
	if (memory == NULL)
		return (NULL);
	ft_memset(memory, 0, size * count);
	return (memory);
}



/* #include <stdio.h>

int main()
{
	size_t num_elements = 5;
    size_t element_size = sizeof(int);

	int *arr = ft_calloc(num_elements, element_size);

	for (size_t i = 0; i < num_elements; i++) {
            printf("%d ", arr[i]);
	}

}
*/


/*int main()
{

    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    // 5 tamsayı için bellek tahsis et ve sıfırla
    int *arr = (int *)ft_calloc(num_elements, element_size);

    if (arr != NULL) {
        for (size_t i = 0; i < num_elements; i++) {
            printf("%d ", arr[i]); // Tüm elemanlar sıfır olacak
        }
        free(arr); // Belleği serbest bırak
    } else {
        printf("Bellek tahsis edilemedi.\n");
    }

    return 0;
}
*/



// bellek ayırıp ayrılan belleğe 0 dolduruyor.
// calloc işlemi, bellek bloğunu belirli bir boyutta tahsis eder ve bu bellek bloğunu sıfırlar, yani tüm baytları 0 değeri ile doldurur.