/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_false.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 20:38:47 by jmartel           #+#    #+#             */
/*   Updated: 2019/11/24 20:38:48 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("False\n");
	if (argc == 1)
		return (1);
	printf("%s\n", argv[1]);
	return (1);
}