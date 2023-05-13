
#include "ft_hashmap.h"

int	ft_hashmap_remove(t_hashmap *map, const char *key)
{
	size_t	i;
	size_t	hashed_key;

	hashed_key = map->hash(key);
	i = map->mask & (hashed_key * PRIME_1);
	while (map->data[i].in_use == true)
	{
		if (ft_strcmp(map->data[i].key, key) == 0)
		{
			free(map->data[i].key);
			map->data[i].key = NULL;
			if (map->destr)
				(map->destr)(map->data[i].value);
			map->data[i].value = NULL;
			map->data[i].in_use = false;
			map->len -= 1;
			return (HASHMAP_SUCCESS);
		}
		else
			i = map->mask & (i + PRIME_2);
	}
	return (HASHMAP_FAILURE);
}
