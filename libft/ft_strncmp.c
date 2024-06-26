/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:18:01 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/30 19:11:33 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-28 18:18
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	return (0);
}

/*

#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = "Hello";
	char str2[] = "HelloWorld";

	int result = ft_strncmp(str1, str2, 7);
	int expect = strncmp(str1, str2, 7);

	if (result == 0) {
		printf("equal\n");
		printf("%d\n",expect);
	} else if (result < 0) {
		printf(" str1 < str2, %d \n", result);
		printf("%d\n",expect);
	} else {
		printf(" str1 > str2, %d \n", result);
		printf("%d\n",expect);
	}
	return 0;
}
*/
