#include "libft.h"
#include <stdio.h>

int main()
{
	char ** out;
	int i = 0;
	out = ft_split("hello!", ' ');
	if (out != NULL)
	{
		while (out[i])
		{
			printf("out: %s\n", out[i]);
			i++;
		}
	}
	printf("size: %i", i);
	
	return 0;
}