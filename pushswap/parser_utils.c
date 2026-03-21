#include "push_swap.h"

static int	is_number(const char *s)
{
	if (!*s)
		return (0);
	if (*s == '+' || *s == '-')
		s++;
	if (!*s)
		return (0);
	while (*s)
		if (*s++ < '0' || *(s - 1) > '9')
			return (0);
	return (1);
}

static int	is_duplicate(t_stack *a, int value)
{
	while (a)
	{
		if (a->value == value)
			return (1);
		a = a->next;
	}
	return (0);
}

int	validate_and_parse(char *s, t_stack *a)
{
	long	num;

	if (!is_number(s))
		error_exit();
	num = ft_atoi(s);
	if (num < INT_MIN || num > INT_MAX)
		error_exit();
	if (is_duplicate(a, (int)num))
		error_exit();
	return ((int)num);
}