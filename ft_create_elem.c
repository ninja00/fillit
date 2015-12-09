/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:52:36 by djoly             #+#    #+#             */
/*   Updated: 2015/12/09 15:48:19 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

t_tetri 	*ft_create_elem(char *ret_ft_fnd)
{
	ft_affiche("create_elem", 0);//
	t_tetri *tmp;

	if(!(tmp = (t_tetri*)malloc(sizeof(t_tetri))))
		return (NULL);
	tmp->next = NULL;
	tmp->idstr = ret_ft_fnd;
	ft_affiche("create_elem", 1); //
	return (tmp);
}
