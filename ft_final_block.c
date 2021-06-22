#include "push_swap.h"

void	ft_optimal_element(t_one *pointer)
{
	t_list	*bag_pointer;

	bag_pointer = pointer->list_pointerB;
	while (bag_pointer)
	{
		ft_optimal_element_util(bag_pointer, pointer);
		bag_pointer = bag_pointer->next;
	}
}

void	ft_optimal_element_util(t_list *list_pointer, t_one *pointer)
{
	t_list	*optimal_element_A;

	optimal_element_A = ft_minimal_difference(list_pointer, pointer);
	ft_count_command(optimal_element_A, list_pointer, pointer);
}

t_list	*ft_minimal_difference(t_list *list_pointerB, t_one *pointer)
{
	t_list	*bag_pointer;
	t_list	*list_min;
	int		max;
	int		min;

	bag_pointer = pointer->list_pointerA;
	list_min = bag_pointer;
	max = bag_pointer->order;
	min = bag_pointer->order;
	while (bag_pointer)
	{
		if (min > bag_pointer->order)
		{
			list_min = bag_pointer;
			min = bag_pointer->order;
		}
		if (max < bag_pointer->order)
			max = bag_pointer->order;
		bag_pointer = bag_pointer->next;
	}
	if (list_pointerB->order < min || list_pointerB->order > max)
		return (list_min);
	else
		return (ft_minimal_difference_utils(pointer, list_pointerB));
}

t_list	*ft_minimal_difference_utils(t_one *pointer, t_list *list_pointerB)
{
	t_list	*bag_pointer;
	t_list	*list_min;
	t_list	*poket;

	list_min = NULL;
	bag_pointer = pointer->list_pointerA;
	while (bag_pointer)
	{
		if (bag_pointer->previous == NULL)
			poket = ft_last_list(pointer->list_pointerA);
		else
			poket = bag_pointer->previous;
		if (bag_pointer->order > list_pointerB->order && \
		list_pointerB->order > poket->order)
		{
			list_min = bag_pointer;
			break ;
		}
		bag_pointer = bag_pointer->next;
	}
	return (list_min);
}

void	ft_count_command(t_list *optimal_element_A, \
t_list *list_pointer_B, t_one *pointer)
{
	ft_count_command_r(optimal_element_A, list_pointer_B, pointer);
	ft_count_command_rr(optimal_element_A, list_pointer_B, pointer);
	ft_count_command_r_rr(optimal_element_A, list_pointer_B, pointer);
	ft_count_command_rr_r(optimal_element_A, list_pointer_B, pointer);
}
