
#include "ft_heap.h"

t_heap	*ft_heap_init(size_t cap, int (*cmp)(const void *, const void *))
{
	t_heap	*new_heap;

	new_heap = malloc(sizeof(t_heap));
	if (!new_heap)
		return (NULL);
	new_heap->data = malloc(sizeof(void *) * (cap + 1));
	if (!new_heap->data)
	{
		free(new_heap);
		return (NULL);
	}
	new_heap->cap = cap;
	new_heap->end = 1;
	new_heap->cmp = cmp;
	return (new_heap);
}
