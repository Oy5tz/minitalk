/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:50:00 by sjaber            #+#    #+#             */
/*   Updated: 2025/02/12 19:14:33 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	g_ack = 0;

static void	ack_handler(int signal)
{
	if (signal == SIGUSR1)
		g_ack = 1;
}

static void	send_char(char c, pid_t pid)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		g_ack = 0;
		if ((c >> i) & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		while (!g_ack)
			;
		i--;
	}
}

static int	valid_pid(char *pid)
{
	while (*pid)
	{
		if (!isdigit(*pid))
			return (0);
		pid++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	char	*input_string;

	if (argc != 3)
		return (1);
	if (!valid_pid(argv[1]))
	{
		ft_printf("Invalid PID\n");
		exit(1);
	}
	pid = ft_atoi(argv[1]);
	input_string = argv[2];
	signal(SIGUSR1, ack_handler);
	while (*input_string)
	{
		send_char(*input_string, pid);
		input_string++;
	}
	send_char('\0', pid);
}
