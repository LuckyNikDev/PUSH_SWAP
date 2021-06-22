#include "push_swap.h"

void	ft_rotate_A(t_one *pointer, int i)
{
	t_list	*buf;

	if (pointer->list_pointerA != NULL && pointer->list_pointerA->next != NULL)
	{
		if (ft_quantity_list(pointer->list_pointerA) == 2)
			ft_rotate_A_util(pointer);
		else
		{
			buf = ft_last_list(pointer->list_pointerA);
			buf->next = pointer->list_pointerA;
			pointer->list_pointerA->next->previous = NULL;
			pointer->list_pointerA->previous = buf;
			buf = pointer->list_pointerA->next;
			pointer->list_pointerA->next = NULL;
			pointer->list_pointerA = buf;
		}
		if (i)
			write(1, "ra\n", 3);
	}
}

void	ft_rotate_A_util(t_one *pointer)
{
	t_list	*buf;

	buf = pointer->list_pointerA->next;
	pointer->list_pointerA->next = NULL;
	buf->previous = NULL;
	pointer->list_pointerA->previous = buf;
	buf->next = pointer->list_pointerA;
	pointer->list_pointerA = buf;
}

void	ft_rotate_B(t_one *pointer, int i)
{
	t_list	*buf;

	if (pointer->list_pointerB != NULL && pointer->list_pointerB->next != NULL)
	{
		if (ft_quantity_list(pointer->list_pointerB) == 2)
			ft_rotate_B_util(pointer);
		else
		{
			buf = ft_last_list(pointer->list_pointerB);
			buf->next = pointer->list_pointerB;
			pointer->list_pointerB->next->previous = NULL;
			pointer->list_pointerB->previous = buf;
			buf = pointer->list_pointerB->next;
			pointer->list_pointerB->next = NULL;
			pointer->list_pointerB = buf;
		}
		if (i)
			write(1, "rb\n", 3);
	}
}

void	ft_rotate_B_util(t_one *pointer)
{
	t_list	*buf;

	buf = pointer->list_pointerB->next;
	pointer->list_pointerB->next = NULL;
	buf->previous = NULL;
	pointer->list_pointerB->previous = buf;
	buf->next = pointer->list_pointerB;
	pointer->list_pointerB = buf;
}

void	ft_rotate_two(t_one *pointer)
{
	ft_rotate_A(pointer, 0);
	ft_rotate_B(pointer, 0);
	write(1, "rr\n", 3);
}
