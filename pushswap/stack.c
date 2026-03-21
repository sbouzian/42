#include "push_swap.h"

t_stack	*stack_new(int value)
{
	t_stack *new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->next = NULL;
	return (new);
}

void	stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack *tmp;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

void	free_stack(t_stack *a)
{
	t_stack *tmp;
	while (a)
	{
		tmp = a->next;
		free(a);
		a = tmp;
	}
}