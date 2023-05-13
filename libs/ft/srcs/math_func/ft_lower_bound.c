
#include "libft.h"

int	*ft_lower_bound(int *arr, int n, int x)
{
	int	mid;
	int	lo;
	int	hi;

	lo = 0;
	hi = n;
	while (lo < hi)
	{
		mid = lo + (hi - lo) / 2;
		if (x <= arr[mid])
			hi = mid;
		else
			lo = mid + 1;
	}
	return (&arr[lo]);
}
