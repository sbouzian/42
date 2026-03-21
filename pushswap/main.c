#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	t_mode	mode;

	if (ac < 2) return (0);
	b = NULL;
	a = parse_args(ac, av, &mode);
	if (!is_sorted(a))
		select_algorithm(&a, &b, mode);
	free_stack(a);
	free_stack(b);
	return (0);
}