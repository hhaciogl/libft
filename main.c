#include "libft.h"
#include <stdio.h>

int main(void)
{

	t_list	*hasan;

	hasan = ft_lstnew("hasan");
	printf("%s\n", hasan->content);

	return 0;
}