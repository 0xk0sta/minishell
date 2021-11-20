/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acostal- <acostal-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:36:26 by acostal-          #+#    #+#             */
/*   Updated: 2021/11/20 16:36:48 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh.h>

void	ft_exit(int exit_code)
{
	if (exit_code == -999)
		exit(0);
	g_sh.status = exit_code;
	exit(exit_code);
}
