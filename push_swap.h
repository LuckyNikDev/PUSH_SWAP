#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

t_one	*ft_create_listone(int argc, char **argv);
void	ft_two_arguments(t_one *pointer);
void	ft_many_arguments(t_one *pointer);
void	ft_quantity_numbers(t_one *pointer);
void	ft_create_mas(t_one *pointer);
void	ft_fullin_mas(t_one *pointer);
int		ft_atoi(const char *str, t_one *pointer);
void	ft_check_duplicate(t_one *pointer);
void	ft_last(t_one *pointer);
int		ft_check_sort(t_one *pointer);
void	ft_create_list(t_one *pointer);
void	ft_crate_and_full_value_to_list(t_one *pointer);
void	ft_sort_mas(t_one *pointer);
void	ft_full_order_to_list(t_one *pointer);
void	ft_quantity_bytes(t_one *pointer);
void	ft_create_single_mas(t_one *pointer);
void	ft_complete_single_mas(t_one *pointer, char *single_mas);
void	ft_free_list(t_one *pointer);
void	ft_engine(t_one *pointer);
void	ft_markup(t_one *pointer);
int		ft_markup_util_one(t_list *bag_pointer, t_one *pointer);
int		ft_quantity_one(t_one *pointer);
void	ft_last_markup(t_one *pointer, int max);
void	ft_ALLpush_to_B(t_one *pointer);
void	ft_rotate_A(t_one *pointer, int i);
void	ft_rotate_A_util(t_one *pointer);
void	ft_rotate_B(t_one *pointer, int i);
void	ft_rotate_B_util(t_one *pointer);
void	ft_rotate_two(t_one *pointer);
void	ft_push_to_A(t_one *pointer);
void	ft_push_to_B(t_one *pointer);
void	ft_reverse_rotate_A(t_one *pointer, int i);
void	ft_reverse_rotate_B(t_one *pointer, int i);
void	ft_reverse_rotate_two(t_one *pointer);
int		ft_quantity_list(t_list *list_pointer);
t_list	*ft_last_list(t_list *list_pointer);
void	ft_final_block(t_one *pointer);
void	ft_optimal_element(t_one *pointer);
void	ft_optimal_element_util(t_list *list_pointer, t_one *pointer);
t_list	*ft_minimal_difference(t_list *list_pointerB, t_one *pointer);
t_list	*ft_ft_minimal_difference_util(t_list *list_pointerB, \
t_list *result, t_one *pointer);
void	ft_count_command(t_list *optimal_element_A, t_list \
*list_pointer_B, t_one *pointer);
void	ft_count_command_r(t_list *optimal_element_A, t_list \
*list_pointer_B, t_one *pointer);
int		ft_count_element_over(t_list *optimal_element_A);
void	ft_count_command_rr(t_list *optimal_element_A, t_list \
*list_pointer_B, t_one *pointer);
int		ft_count_element_under(t_list *optimal_element_A);
void	ft_count_command_r_rr(t_list *optimal_element_A, t_list \
*list_pointer_B, t_one *pointer);
void	ft_count_command_rr_r(t_list *optimal_element_A, t_list \
*list_pointer_B, t_one *pointer);
void	ft_to_zero_struct(t_one *pointer);
void	ft_moving_from_B_to_A(t_one *pointer);
void	ft_move_r(t_one *pointer);
void	ft_move_rr(t_one *pointer);
void	ft_move_r_rr(t_one *pointer);
void	ft_move_rr_r(t_one *pointer);
void	ft_check_sort_finel(t_one *pointer);
void	ft_check_sort_finel_util(t_one *pointer, int flag);
t_list	*ft_minimal_difference_utils(t_one *pointer, \
t_list *list_pointerB);
int		ft_count_command_r_utils(t_list *optimal_element_A, \
t_list *list_pointer_B);
int		ft_count_command_rr_utils(t_list *optimal_element_A, \
t_list *list_pointer_B);
int		ft_quantity_numbers_util(t_one *pointer, int i);
void	ft_sort_three_elems(t_one *pointer);
void	ft_swap_A(t_one *pointer);
int		ft_max(t_one *pointer);
int		ft_min(t_one *pointer);

#endif