#include "push_swap.h"

void	ft_crate_and_full_value_to_list(t_one *pointer)
{
	int	quantity_number;
	int	i;

	i = 1;
	quantity_number = pointer->quantity_number - 1;
	pointer->list_pointerA = ft_lstnew((pointer->mas)[0], 0);
	if (!(pointer->list_pointerA))
	{
		pointer->error = 1;
		return ;
	}
	while (quantity_number)
	{
		ft_lstadd_back(pointer->list_pointerA, \
		ft_lstnew((pointer->mas)[i], 0), pointer);
		if (pointer->error)
			return ;
		i++;
		quantity_number--;
	}
}

void	ft_sort_mas(t_one *pointer)
{
	int	*mas;
	int	i;
	int	buf;
	int	quantity_number;

	i = 0;
	quantity_number = pointer->quantity_number - 1;
	mas = pointer->mas;
	while (quantity_number)
	{
		while (i < quantity_number)
		{
			if (mas[i] <= mas[i + 1])
				i++;
			else if (mas[i] > mas[i + 1])
			{
				buf = mas[i];
				mas[i] = mas[i + 1];
				mas[i + 1] = buf;
				i++;
			}
		}
		i = 0;
		quantity_number--;
	}
}

void	ft_full_order_to_list(t_one *pointer)
{
	t_list	*list;
	int		*mas;
	int		i;

	i = 0;
	mas = pointer->mas;
	list = pointer->list_pointerA;
	while (list)
	{
		while (i < (pointer->quantity_number))
		{
			if ((list->value) == mas[i])
				list->order = i + 1;
			i++;
		}
		i = 0;
		list = list->next;
	}
}
