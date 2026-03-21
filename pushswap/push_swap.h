#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

typedef enum e_mode
{
	ADAPTIVE,
	SIMPLE,
	MEDIUM,
	COMPLEX
}	t_mode;

// parser
t_stack	*parse_args(int ac, char **av, t_mode *mode);
int		validate_and_parse(char *s, t_stack *a);

// error
void	error_exit(void);

// disorder
double	compute_disorder(t_stack *a);

// algorithm selector
void	select_algorithm(t_stack **a, t_stack **b, t_mode mode);

// algorithms
void	simple_sort(t_stack **a, t_stack **b);
void	medium_sort(t_stack **a, t_stack **b);
void	complex_sort(t_stack **a, t_stack **b);
void	adaptive_sort(t_stack **a, t_stack **b);

// operations
void	sa(t_stack **a);
void	sb(t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);

// stack utils
t_stack	*stack_new(int value);
void	stack_add_back(t_stack **stack, t_stack *new);
int		stack_size(t_stack *a);
int		is_sorted(t_stack *a);
void	free_stack(t_stack *a);

#endif