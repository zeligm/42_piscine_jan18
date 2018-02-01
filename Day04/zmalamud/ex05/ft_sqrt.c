/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:03:29 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/13 17:43:31 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int root;
	int r;

	root = 0;
	r = 0;
	while (r < nb)
	{
		r = root * root;
		if (r == nb)
		{
			return (root);
		}
		root++;
	}
	return (0);
}