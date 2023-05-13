
#include "ft_heap.h"
#include "ft_pqueue.h"

int	ft_priority_queue_push(t_pqueue *queue, void *data)
{
	if (ft_heap_push(queue->heap, data) == HEAP_FAILURE)
		return (PQUEUE_FAILURE);
	return (PQUEUE_SUCCESS);
}

int	ft_priority_queue_pop(t_pqueue *queue, void **data)
{
	if (ft_heap_pop(queue->heap, data) == HEAP_FAILURE)
		return (PQUEUE_FAILURE);
	return (PQUEUE_SUCCESS);
}
