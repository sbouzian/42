#include "push_swap.h"

// Encuentra posición del valor objetivo (min o max) más cercano
static int	find_pos(t_stack *stack, int target)
{
	int i = 0;
	t_stack *tmp = stack;
	while (tmp)
	{
		if (tmp->value == target)
			return (i);
		tmp = tmp->next;
		i++;
	}
	return (-1);
}

// Empuja desde a a b todos los valores <= max_chunk, usando la rotación mínima
static void	push_chunk(t_stack **a, t_stack **b, int max_chunk)
{
	while (*a)
	{
		int val = (*a)->value;
		if (val <= max_chunk)
			pb(a, b);
		else
			ra(a);
		if (!*a || is_sorted(*a))
			break ;
	}
}

// Reconstruye a desde b moviendo siempre el valor máximo más cercano
static void	rebuild_a(t_stack **a, t_stack **b)
{
	while (*b)
	{
		int max = (*b)->value;
		t_stack *tmp = (*b)->next;
		while (tmp)
		{
			if (tmp->value > max)
				max = tmp->value;
			tmp = tmp->next;
		}
		int pos = find_pos(*b, max);
		if (pos <= stack_size(*b) / 2)
			while ((*b)->value != max) rb(b);
		else
			while ((*b)->value != max) rrb(b);
		pa(a, b);
	}
}

// Algoritmo chunk O(n√n) adaptado para 42
void	medium_sort(t_stack **a, t_stack **b)
{
	int size = stack_size(*a);
	int chunk = 1;
	while (chunk * chunk < size)
		chunk++;
	int i = 0;
	while (i * chunk < size)
		push_chunk(a, b, (i++ + 1) * chunk);
	rebuild_a(a, b);
}