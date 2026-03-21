#include "push_swap.h"

void	simple_sort(t_stack **a, t_stack **b)
{
	while (!is_sorted(*a))
	{
		if ((*a)->value > (*a)->next->value)
			sa(a);
		else
			ra(a);
	}
	(void)b;
}