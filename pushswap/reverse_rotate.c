#include "push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*prev = NULL;
	t_stack	*last;
	if (!*a || !(*a)->next) return;
	last = *a;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *a;
	*a = last;
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack **b)
{
	t_stack	*prev = NULL;
	t_stack	*last;
	if (!*b || !(*b)->next) return;
	last = *b;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *b;
	*b = last;
	ft_putstr_fd("rrb\n", 1);
}