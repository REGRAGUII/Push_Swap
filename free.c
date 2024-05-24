
#include "./includes/push_swap.h"

void	free_double(char **str)
{
    int i;

    i = 0;
 	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
void	free_stack(t_list **a)
{
	t_list	*temp;

	
	temp = *a;
	while(temp)
	{
		*a = temp->next;
		free(temp);
		temp = *a;
	}
	*a = NULL;
}