
#include "ft_heap.h"

void	ft_heap_delete(t_heap **heap, void (*del)(void *))
{
	size_t	len;
	void	*data;

	if (!*heap)
		return ;
	len = ft_heap_size(*heap);
	if (del)
	{
		while (len--)
		{
			ft_heap_pop(*heap, &data);
			del(data);
		}
	}
	free((*heap)->data);
	(*heap)->data = NULL;
	free(*heap);
	*heap = NULL;
}
