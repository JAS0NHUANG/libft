#include "libft.h"

void	ft_free_strarray(char **str_array)
{
	char **holder;

	if (str_array)
	{
		holder = str_array;
		while (*holder)
		{
			free(*holder);
			holder++;
		}
		free(str_array);
	}
	return ;
}
