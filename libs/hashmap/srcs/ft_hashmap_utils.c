
#include "ft_hashmap.h"

void	*ft_memset(void *p, int c, size_t len)
{
	void	*ret;

	ret = p;
	while (len--)
	{
		*(unsigned char *)p = (unsigned char)c;
		p++;
	}
	return (ret);
}

int	ft_strcmp(const char *p1, const char *p2)
{
	const unsigned char		*s1;
	const unsigned char		*s2;
	unsigned char			c1;
	unsigned char			c2;

	s1 = (const unsigned char *)p1;
	s2 = (const unsigned char *)p2;
	while (true)
	{
		c1 = (unsigned char) *s1++;
		c2 = (unsigned char) *s2++;
		if (c1 == '\0')
			return (c1 - c2);
		if (c1 != c2)
			break ;
	}
	return (c1 - c2);
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}
