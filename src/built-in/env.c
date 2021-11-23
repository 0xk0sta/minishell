/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acostal- <acostal-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:36:18 by acostal-          #+#    #+#             */
/*   Updated: 2021/11/20 19:31:28 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh.h>

int	ft_env(char **n)
{
	t_list	*head;

	head = g_sh.env;
	if (!g_sh.env)
		return (0);
	if (!n[1])
	{
		while (g_sh.env)
		{
			write(1, g_sh.env->data, ft_strlen((char *)g_sh.env->data));
			write(1, "\n", 1);
			g_sh.env = g_sh.env->next;
		}
		g_sh.env = head;
		g_sh.status = 0;
	}
	else
	{
		write(STDERR_FILENO, "env: ", 5);
		write(STDERR_FILENO, n[1], ft_strlen(n[1]));
		write(STDERR_FILENO, ": No such file or directory\n", 28);
		return (1);
	}
	return (0);
}
