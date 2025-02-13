/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:50:00 by sjaber            #+#    #+#             */
/*   Updated: 2025/02/13 16:46:21 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	g_ack = 0;

static void	ack_handler(int signal)
{
	if (signal == SIGUSR1)
		g_ack = 1;
	else if (signal == SIGUSR2)
		ft_printf("Message received successfully!\n");
	else
		ft_printf("Error: Invalid signal received.\n");
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

int	main(int argc, char **argv)
{
	pid_t	pid;
	char	*input_string;

	if (argc != 3)
	{
		ft_printf("Usage: %s [PID] [message]\n", argv[0]);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	// Validate the server pid existence.
	if (kill(pid, 0) != 0)
	{
		ft_printf("Error: Invalid server pid or process not active.\n");
		return (1);
	}
	input_string = argv[2];
	signal(SIGUSR1, ack_handler);
	signal(SIGUSR2, ack_handler);
	while (*input_string)
	{
		send_char(*input_string, pid);
		input_string++;
	}
	send_char('\0', pid);
}
