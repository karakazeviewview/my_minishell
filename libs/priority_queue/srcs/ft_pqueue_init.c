
#include "ft_heap.h"
#include "ft_pqueue.h"

t_pqueue	*ft_priority_queue_init(size_t cap,
	int (*cmp)(const void *, const void *))
{
	t_pqueue	*new;

	new = malloc(sizeof(t_pqueue));
	if (!new)
		return (NULL);
	new->heap = ft_heap_init(cap, cmp);
	return (new);
}

void	ft_priority_queue_delete(t_pqueue **queue, void (*del)(void *))
{
	ft_heap_delete(&(*queue)->heap, del);
	free(*queue);
	*queue = NULL;
}
