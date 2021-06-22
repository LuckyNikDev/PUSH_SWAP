#include "push_swap.h"

void	ft_count_command_rr_r(t_list *optimal_element_A, \
t_list *list_pointer_B, t_one *pointer)
{
	int	underA;
	int	overB;
	int	quantity;

	underA = ft_count_element_under(optimal_element_A);
	overB = ft_count_element_over(list_pointer_B);
	quantity = underA + overB;
	if (quantity < pointer->quantity_command)
	{
		pointer->stack_A = underA;
		pointer->stack_B = overB;
		pointer->quantity_command = quantity;
		pointer->sorting_method = 4;
		pointer->optimal_in_A = optimal_element_A->order;
		pointer->optimal_in_B = list_pointer_B->order;
	}
}

int	ft_count_element_under(t_list *optimal_element_A)
{
	int	result;

	result = 0;
	while (optimal_element_A->next)
	{
		result++;
		optimal_element_A = optimal_element_A->next;
	}
	if (optimal_element_A->previous)
		result++;
	return (result);
}

int	ft_count_element_over(t_list *optimal_element_A)
{
	int	result;

	result = 0;
	while (optimal_element_A->previous)
	{
		result++;
		optimal_element_A = optimal_element_A->previous;
	}
	return (result);
}
