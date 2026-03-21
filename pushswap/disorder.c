#include "push_swap.h"

double	compute_disorder(t_stack *a)
{
	t_stack	*i;
	t_stack	*j;
	int		mistakes = 0;
	int		total = 0;

	i = a;
	while (i)
	{
		j = i->next;
		while (j)
		{
			total++;
			if (i->value > j->value)
				mistakes++;
			j = j->next;
		}
		i = i->next;
	}
	return (total ? (double)mistakes / total : 0);
}