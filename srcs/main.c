/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:32:03 by nlafarge          #+#    #+#             */
/*   Updated: 2022/03/30 15:36:44 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../boilerplate.h"

int	main(int argc, char **argv)
{
	printf("The program contains %d parameters and it's name is %s", argc - 1, argv[0]);

	return (0);
}