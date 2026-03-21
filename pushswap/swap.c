#include "push_swap.h"

void	sa(t_stack **a)
{
	int	tmp;
	if (!*a || !(*a)->next) return;
	tmp = (*a)->value;
	(*a)->value = (*a)->next->value;
	(*a)->next->value = tmp;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack **b)
{
	int	tmp;
	if (!*b || !(*b)->next) return;
	tmp = (*b)->value;
	(*b)->value = (*b)->next->value;
	(*b)->next->value = tmp;
	ft_putstr_fd("sb\n", 1);
}