
#include "ft_heap.h"
#include "ft_pqueue.h"

bool	ft_priority_queue_is_empty(t_pqueue *queue)
{
	if (ft_heap_is_empty(queue->heap) == true)
		return (true);
	return (false);
}

size_t	ft_priority_queue_size(t_pqueue *queue)
{
	return (ft_heap_size(queue->heap));
}
