#include "push_swap.h"

t_list	*ft_last_list(t_list *list_pointer)
{
	while (list_pointer)
	{
		if (list_pointer->next == NULL)
			return (list_pointer);
		list_pointer = list_pointer->next;
	}
	return (NULL);
}

t_one	*ft_create_listone(int argc, char **argv)
{
	t_one	*result;

	result = (t_one *)malloc(sizeof(t_one));
	if (result)
	{
		result->flag_usetwoway = 0;
		result->argc = argc;
		result->argv = argv;
		result->error = 0;
		result->quantity_number = 0;
		result->mas = NULL;
		result->bytes = 1;
		result->list_pointerA = NULL;
		result->list_pointerB = NULL;
		result->index = 0;
		result->quantity_command = 2147483647;
	}
	return (result);
}

void	ft_free_list(t_one *pointer)
{
	t_list	*element;
	t_list	*for_free;

	if (pointer->list_pointerA)
	{
		element = pointer->list_pointerA;
		while (element)
		{
			for_free = element;
			element = element->next;
			free(for_free);
		}
	}
	if (pointer->list_pointerB)
	{
		element = pointer->list_pointerB;
		while (element)
		{
			for_free = element;
			element = element->next;
			free(for_free);
		}
	}
}

void	ft_to_zero_struct(t_one *pointer)
{
	pointer->optimal_in_A = 0;
	pointer->optimal_in_B = 0;
	pointer->sorting_method = 0;
	pointer->quantity_command = 2147483647;
}

int	ft_quantity_numbers_util(t_one *pointer, int i)
{
	char	*mas;

	mas = (pointer->argv)[1];
	if (mas[i] == '-' || mas[i] == '+')
	{
		i++;
		if (mas[i] < '0' || mas[i] > '9')
			pointer->error = 1;
	}
	if (mas[i] >= '0' && mas[i] <= '9' && mas[i] != '\0')
	{
		while (mas[i] >= '0' && mas[i] <= '9' && mas[i] != '\0')
			i++;
		(pointer->quantity_number)++;
	}
	while (mas[i] == ' ' && mas[i] != '\0')
		i++;
	return (i);
}
