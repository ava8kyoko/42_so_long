/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acid.burn <acid.burn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:35:54 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/24 09:18:55 by acid.burn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	i;
	size_t	len;

	if (!src)
		return (0);
	len = ft_strlen(src);
	dst = malloc(sizeof(char) * len + 1);
	if (!dst)
		return (0);
	i = -1;
	while (src[++i] != 0 && len--)
		dst[i] = src[i];
	dst[i] = 0;
	return (dst);
}
