/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:13:30 by djoly             #+#    #+#             */
/*   Updated: 2015/12/08 19:29:25 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"
#include "libft.h"

int		ft_cmp(char *tmp, char **lst_id)
{
	int	i;

	i = 0;
	while (i < 19)
	{
		if (!(ft_strcmp(tmp, lst_id[i])))
			return (1);
		i++;
	}
	return (0);
}