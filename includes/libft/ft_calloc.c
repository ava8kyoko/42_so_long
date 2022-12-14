/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acid.burn <acid.burn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:17:06 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/09 17:13:16 by acid.burn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_calloc(size_t number_element, size_t size_element)
{
	char	*allocated_area;

	allocated_area = malloc(number_element * size_element);
	if (!allocated_area)
		return (NULL);
	ft_memset(allocated_area, 0, (number_element * size_element));
	return (allocated_area);
}
