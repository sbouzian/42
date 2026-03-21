#include "push_swap.h"

static int	is_flag(char *s, t_mode *mode)
{
	if (!ft_strncmp(s, "--simple", 9))
		*mode = SIMPLE;
	else if (!ft_strncmp(s, "--medium", 9))
		*mode = MEDIUM;
	else if (!ft_strncmp(s, "--complex", 10))
		*mode = COMPLEX;
	else if (!ft_strncmp(s, "--adaptive", 11))
		*mode = ADAPTIVE;
	else
		return (0);
	return (1);
}

t_stack	*parse_args(int ac, char **av, t_mode *mode)
{
	t_stack	*a;
	int		i;

	a = NULL;
	*mode = ADAPTIVE;
	i = 1;
	if (is_flag(av[1], mode))
		i++;
	while (i < ac)
	{
		stack_add_back(&a, stack_new(validate_and_parse(av[i], a)));
		i++;
	}
	return (a);
}