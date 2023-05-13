
#include "libft.h"

int	*ft_binary_search(int *arr, size_t size, int value)
{
	int	lo;
	int	hi;
	int	mid;

	lo = 0;
	hi = size - 1;
	while (lo <= hi)
	{
		mid = (lo + hi) / 2;
		if (arr[mid] == value)
			return (&arr[mid]);
		else if (arr[mid] < value)
			lo = mid + 1;
		else
			hi = mid - 1;
	}
	return (NULL);
}
