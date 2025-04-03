/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:56:50 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/03 13:00:35 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *cur;

    if (begin_list == NULL || *begin_list == NULL)
        return ;
    cur = *begin_list;
    if (cmp(cur->data, data_ref) == 0)
    {
        *begin_list
    }
}