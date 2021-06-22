#include "push_swap.h"

void	ft_reverse_rotate_A(t_one *pointer, int i)
{
	t_list	*buf;

	if (pointer->list_pointerA != NULL && pointer->list_pointerA->next != NULL)
	{
		if (ft_quantity_list(pointer->list_pointerA) == 2)
		{
			buf = pointer->list_pointerA->next;
			pointer->list_pointerA->next = NULL;
			buf->previous = NULL;
			pointer->list_pointerA->previous = buf;
			buf->next = pointer->list_pointerA;
			pointer->list_pointerA = buf;
		}
		else
		{
			buf = ft_last_list(pointer->list_pointerA);
			buf->next = pointer->list_pointerA;
			buf->previous->next = NULL;
			buf->previous = NULL;
			pointer->list_pointerA->previous = buf;
			pointer->list_pointerA = buf;
		}
		if (i)
			write(1, "rra\n", 4);
	}
}

void	ft_reverse_rotate_B(t_one *pointer, int i)
{
	t_list	*buf;

	if (pointer->list_pointerB != NULL && pointer->list_pointerB->next != NULL)
	{
		if (ft_quantity_list(pointer->list_pointerB) == 2)
		{
			buf = pointer->list_pointerB->next;
			pointer->list_pointerB->next = NULL;
			buf->previous = NULL;
			pointer->list_pointerB->previous = buf;
			buf->next = pointer->list_pointerB;
			pointer->list_pointerB = buf;
		}
		else
		{
			buf = ft_last_list(pointer->list_pointerB);
			buf->next = pointer->list_pointerB;
			buf->previous->next = NULL;
			buf->previous = NULL;
			pointer->list_pointerB->previous = buf;
			pointer->list_pointerB = buf;
		}
		if (i)
			write(1, "rrb\n", 4);
	}
}

void	ft_reverse_rotate_two(t_one *pointer)
{
	ft_reverse_rotate_A(pointer, 0);
	ft_reverse_rotate_B(pointer, 0);
	write(1, "rrr\n", 4);
}

void	ft_sort_three_elems(t_one *pointer)
{
	if (pointer->list_pointerA->order == ft_max(pointer))
	{
		ft_swap_A(pointer);
		ft_reverse_rotate_A(pointer, 1);
	}
	else if (pointer->list_pointerA->order == ft_min(pointer))
	{
		ft_swap_A(pointer);
		ft_rotate_A(pointer, 1);
	}
	else
		ft_swap_A(pointer);
}
