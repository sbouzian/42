#include "push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	if (!*b) return;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	if (!*a) return;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	ft_putstr_fd("pb\n", 1);
}