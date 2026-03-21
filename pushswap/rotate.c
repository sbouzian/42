#include "push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*first;
	t_stack	*last;
	if (!*a || !(*a)->next) return;
	first = *a;
	*a = first->next;
	first->next = NULL;
	last = *a;
	while (last->next) last = last->next;
	last->next = first;
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack **b)
{
	t_stack	*first;
	t_stack	*last;
	if (!*b || !(*b)->next) return;
	first = *b;
	*b = first->next;
	first->next = NULL;
	last = *b;
	while (last->next) last = last->next;
	last->next = first;
	ft_putstr_fd("rb\n", 1);
}