#include "../includes/libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char 	*s_ptr;
	size_t			i;

	i = 0;
	s_ptr = (unsigned char *)s;
	while (i < n)
	{
		if (s_ptr[i] == (unsigned char)c)
			return (s_ptr + i);
		i++;
	}
	return (NULL);
}