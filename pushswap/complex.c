#include "push_swap.h"

static int	get_max_bits(t_stack *a)
{
	int max = a->value;
	t_stack *tmp = a;
	while (tmp)
	{
		if (tmp->value > max)
			max = tmp->value;
		tmp = tmp->next;
	}
	int bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

void	complex_sort(t_stack **a, t_stack **b)
{
	int size = stack_size(*a);
	int max_bits = get_max_bits(*a);
	for (int i = 0; i < max_bits; i++)
	{
		int j = 0;
		while (j++ < size)
		{
			if (((*a)->value >> i) & 1)
				ra(a);
			else
				pb(a, b);
		}
		while (*b)
			pa(a, b);
	}
}