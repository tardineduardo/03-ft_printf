#include "libft.h"

void	ft_free_array_of_strings(char **array_of_strings)
{
	int	a;
	
	a = 0;
	while(array_of_strings[a])
	{
		free(array_of_strings[a]);
		a++;
	}
	free(array_of_strings);
}