#include "push_swap.h"

int	stack_size(t_stack *a)
{
	int i = 0;
	while (a)
	{
		i++;
		a = a->next;
	}
	return (i);
}

int	is_sorted(t_stack *a)
{
	while (a && a->next)
	{
		if (a->value > a->next->value)
			return (0);
		a = a->next;
	}
	return (1);
}