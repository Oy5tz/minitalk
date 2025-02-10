/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:50:00 by sjaber            #+#    #+#             */
/*   Updated: 2025/02/10 17:08:29 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int g_ack = 0;

static void ack_handler(int sig)
{
        (void)sig;
        g_ack = 1;
}

static void send_char(char c, pid_t pid)
{
        int     i;

        i = 8;
        while (i > 0)
        {
                g_ack = 0;
                if((c >> i) & 1)
                        kill(pid, SIGUSR2);
                else
                        kill(pid, SIGUSR1);
                while(!g_ack)
                        usleep(300);
                i--;
        }
}

static int valid_pid(char *pid)
{
        int     i;

        i = 0;
        while (pid[i])
        {
                if (!isdigit(pid[i]))
                return (0);
                i++;
        }
        return (1);
}

int main(int argc, char **argv)
{
        pid_t   pid;

        if(argc != 3)
        {
                ft_printf("Usage: ./client [PID] [Message]\n");
                return (1);
        }

        if(!valid_pid(argv[1]))
        {
            ft_printf("Invalid PID\n");
            exit(1);
        }
        pid = ft_atoi(argv[1]);
        signal(SIGUSR1, ack_handler);
        while(*argv[2])
        {
                send_char(*argv[2], pid);
                argv[2]++;
        }
        send_char('\0', pid);
}