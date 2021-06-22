#include "push_swap.h"

void	ft_count_command_r(t_list *optimal_element_A, \
t_list *list_pointer_B, t_one *pointer)
{
	int	overA;
	int	overB;
	int	quantity;

	overA = ft_count_element_over(optimal_element_A);
	overB = ft_count_element_over(list_pointer_B);
	quantity = ft_count_command_r_utils(optimal_element_A, list_pointer_B);
	if (quantity < pointer->quantity_command)
	{
		pointer->stack_A = overA;
		pointer->stack_B = overB;
		pointer->quantity_command = quantity;
		pointer->sorting_method = 1;
		pointer->optimal_in_A = optimal_element_A->order;
		pointer->optimal_in_B = list_pointer_B->order;
	}
}

int	ft_count_command_r_utils(t_list *optimal_element_A, t_list *list_pointer_B)
{
	int	quantity;
	int	overA;
	int	overB;
	int	different;

	overA = ft_count_element_over(optimal_element_A);
	overB = ft_count_element_over(list_pointer_B);
	if (overA > overB)
	{
		different = overA - overB;
		quantity = overB + different;
	}
	else if (overA < overB)
	{
		different = overB - overA;
		quantity = overA + different;
	}
	else
		quantity = overB;
	return (quantity);
}

void	ft_count_command_rr(t_list *optimal_element_A, \
t_list	*list_pointer_B, t_one *pointer)
{
	int	underA;
	int	underB;
	int	quantity;

	underA = ft_count_element_under(optimal_element_A);
	underB = ft_count_element_under(list_pointer_B);
	quantity = ft_count_command_rr_utils(optimal_element_A, list_pointer_B);
	if (quantity < pointer->quantity_command)
	{
		pointer->stack_A = underA;
		pointer->stack_B = underB;
		pointer->quantity_command = quantity;
		pointer->sorting_method = 2;
		pointer->optimal_in_A = optimal_element_A->order;
		pointer->optimal_in_B = list_pointer_B->order;
	}
}

int	ft_count_command_rr_utils(t_list *optimal_element_A, t_list *list_pointer_B)
{
	int	quantity;
	int	underA;
	int	underB;
	int	different;

	underA = ft_count_element_under(optimal_element_A);
	underB = ft_count_element_under(list_pointer_B);
	if (underA > underB)
	{
		different = underA - underB;
		quantity = underB + different;
	}
	else if (underA < underB)
	{
		different = underB - underA;
		quantity = underA + different;
	}
	else
		quantity = underB;
	return (quantity);
}

void	ft_count_command_r_rr(t_list *optimal_element_A, \
t_list *list_pointer_B, t_one *pointer)
{
	int	overA;
	int	underB;
	int	quantity;

	overA = ft_count_element_over(optimal_element_A);
	underB = ft_count_element_under(list_pointer_B);
	quantity = underB + overA;
	if (quantity < pointer->quantity_command)
	{
		pointer->stack_A = overA;
		pointer->stack_B = underB;
		pointer->quantity_command = quantity;
		pointer->sorting_method = 3;
		pointer->optimal_in_A = optimal_element_A->order;
		pointer->optimal_in_B = list_pointer_B->order;
	}
}
