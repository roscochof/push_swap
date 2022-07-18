/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:40:35 by amarzana          #+#    #+#             */
/*   Updated: 2022/07/18 17:01:57 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	struct s_list	*previous;
}					t_list;

typedef struct s_control
{
	struct s_list	*stack_a;
	struct s_list	*stack_b;
	int				error;
}					t_control;

/*-----------	Utils	-----------*/
char	**ft_split(char const *s, char c);
int		ft_atoi_check(const char *str, int *error);

t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_free_lst(t_list **lst);
void	ft_free(char **ptr);

#endif
