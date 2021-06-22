#include "push_swap.h"

void	ft_push_to_A(t_one *pointer)
{
	t_list	*buf;

	if (pointer->list_pointerA == NULL && pointer->list_pointerB != NULL)
	{
		pointer->list_pointerA = pointer->list_pointerB;
		pointer->list_pointerB = pointer->list_pointerB->next;
		if (pointer->list_pointerB)
			pointer->list_pointerB->previous = NULL;
		pointer->list_pointerA->next = NULL;
		write(1, "pa\n", 3);
	}
	else if (pointer->list_pointerB != NULL)
	{
		buf = pointer->list_pointerB;
		pointer->list_pointerB = pointer->list_pointerB->next;
		if (pointer->list_pointerB)
			pointer->list_pointerB->previous = NULL;
		buf->next = pointer->list_pointerA;
		buf->previous = NULL;
		pointer->list_pointerA->previous = buf;
		pointer->list_pointerA = buf;
		write(1, "pa\n", 3);
	}
}

void	ft_push_to_B(t_one *pointer)
{
	t_list	*buf;

	if (pointer->list_pointerB == NULL && pointer->list_pointerA != NULL)
	{
		pointer->list_pointerB = pointer->list_pointerA;
		pointer->list_pointerA = pointer->list_pointerA->next;
		if (pointer->list_pointerA)
			pointer->list_pointerA->previous = NULL;
		pointer->list_pointerB->next = NULL;
		write(1, "pb\n", 3);
	}
	else if (pointer->list_pointerA != NULL)
	{
		buf = pointer->list_pointerA;
		pointer->list_pointerA = pointer->list_pointerA->next;
		if (pointer->list_pointerA)
			pointer->list_pointerA->previous = NULL;
		buf->next = pointer->list_pointerB;
		buf->previous = NULL;
		pointer->list_pointerB->previous = buf;
		pointer->list_pointerB = buf;
		write(1, "pb\n", 3);
	}
}

int	ft_quantity_list(t_list *list_pointer)
{
	int	count;

	count = 0;
	while (list_pointer)
	{
		count++;
		list_pointer = list_pointer->next;
	}
	return (count);
}

void	ft_check_sort_finel_util(t_one *pointer, int flag)
{
	t_list	*bag_pointer;

	bag_pointer = pointer->list_pointerA;
	if (flag)
	{
		while (bag_pointer->order != 1)
		{
			ft_rotate_A(pointer, 1);
			bag_pointer = pointer->list_pointerA;
		}
	}
	else
	{
		while (bag_pointer->order != 1)
		{
			ft_reverse_rotate_A(pointer, 1);
			bag_pointer = pointer->list_pointerA;
		}
	}
}
