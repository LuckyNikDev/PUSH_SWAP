#include "push_swap.h"

void	ft_moving_from_B_to_A(t_one *pointer)
{
	if (pointer->sorting_method == 1)
		ft_move_r(pointer);
	else if (pointer->sorting_method == 2)
		ft_move_rr(pointer);
	else if (pointer->sorting_method == 3)
		ft_move_r_rr(pointer);
	else
		ft_move_rr_r(pointer);
}

void	ft_move_r(t_one *pointer)
{
	int	different;

	if (pointer->stack_A > pointer->stack_B)
	{
		different = pointer->stack_A - pointer->stack_B;
		while (pointer->stack_B--)
			ft_rotate_two(pointer);
		while (different--)
			ft_rotate_A(pointer, 1);
	}
	else if (pointer->stack_A < pointer->stack_B)
	{
		different = pointer->stack_B - pointer->stack_A;
		while (pointer->stack_A--)
			ft_rotate_two(pointer);
		while (different--)
			ft_rotate_B(pointer, 1);
	}
	else
	{
		while (pointer->stack_A--)
			ft_rotate_two(pointer);
	}
	ft_push_to_A(pointer);
}

void	ft_move_rr(t_one *pointer)
{
	int	different;

	if (pointer->stack_A > pointer->stack_B)
	{
		different = pointer->stack_A - pointer->stack_B;
		while (pointer->stack_B--)
			ft_reverse_rotate_two(pointer);
		while (different--)
			ft_reverse_rotate_A(pointer, 1);
	}
	else if (pointer->stack_A < pointer->stack_B)
	{
		different = pointer->stack_B - pointer->stack_A;
		while (pointer->stack_A--)
			ft_reverse_rotate_two(pointer);
		while (different--)
			ft_reverse_rotate_B(pointer, 1);
	}
	else
	{
		while (pointer->stack_A--)
			ft_reverse_rotate_two(pointer);
	}
	ft_push_to_A(pointer);
}

void	ft_move_r_rr(t_one *pointer)
{
	int	overA;
	int	underB;

	overA = pointer->stack_A;
	underB = pointer->stack_B;
	while (overA--)
		ft_rotate_A(pointer, 1);
	while (underB--)
		ft_reverse_rotate_B(pointer, 1);
	ft_push_to_A(pointer);
}

void	ft_move_rr_r(t_one *pointer)
{
	int	underA;
	int	overB;

	underA = pointer->stack_A;
	overB = pointer->stack_B;
	while (underA--)
		ft_reverse_rotate_A(pointer, 1);
	while (overB--)
		ft_rotate_B(pointer, 1);
	ft_push_to_A(pointer);
}
