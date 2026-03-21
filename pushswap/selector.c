#include "push_swap.h"

void	select_algorithm(t_stack **a, t_stack **b, t_mode mode)
{
	if (mode == SIMPLE)
		simple_sort(a, b);
	else if (mode == MEDIUM)
		medium_sort(a, b);
	else if (mode == COMPLEX)
		complex_sort(a, b);
	else
		adaptive_sort(a, b);
}