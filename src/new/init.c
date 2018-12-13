/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 07:40:10 by alex              #+#    #+#             */
/*   Updated: 2018/12/12 23:17:01 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ping.h"

void				int_handler(int sig)
{
	g_is_stop = 1;
}

int					init_socket(const char *adr)
{
	int			s;
	const int	val = MY_TTL;
	struct addrinfo hints;
	struct addrinfo *result;

	memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_RAW;
	hints.ai_protocol = IPPROTO_ICMP;
	if (getaddrinfo(adr, 0, &hints, &result) < 0)
	{
		printf("ft_ping: unknown host %s\n", adr);
		exit(EXIT_FAILURE);
	}
	s = socket(result->ai_family, result->ai_socktype, result->ai_protocol);
	if (s == -1)
	{
	  printf("ft_ping: socket: unknown host %s\n", adr);
	  exit(EXIT_FAILURE);
	}
	if (setsockopt(s, IPPROTO_IP, IP_TTL, &val, sizeof(val)) != 0)
	{
		printf("%s\n", "ERROR");
		exit(EXIT_FAILURE);
	}
	return (s);
}

struct sockaddr		*get_addr(const char *adr, t_env *e)
{
	struct addrinfo	hints;

	memset(&hints, 0, sizeof(hints));
	hints.ai_flags = 0;
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_RAW;
	hints.ai_protocol = IPPROTO_ICMP;
	if (getaddrinfo(adr, 0, &hints, &e->res) < 0)
	{
		printf("ft_ping: unknown host %s\n", adr);
		exit(EXIT_FAILURE);
	}
	if (!inet_ntop(AF_INET, &((struct sockaddr_in *)e->res->ai_addr)->sin_addr,
		e->ipv4, INET_ADDRSTRLEN))
	{
		printf("Error to get adress.\n");
		exit(EXIT_FAILURE);
	}
	return (e->res->ai_addr);
}

void				init_env(int ac, char **av, t_env *e)
{
	gettimeofday(&e->start_time, NULL);
	e->pid = getpid();
	e->seq = 1;
	e->option_t = 0;
	e->option_v = 0;
	e->nb_packet_send = 0;
	e->nb_packet_rcv = 0;
	e->nb_packet_error = 0;
	e->min = 0;
	e->max = 0;
	e->total = 0;
	ft_bzero(e->ipv4, INET_ADDRSTRLEN);
	check(ac, av, e);
	e->socket = init_socket(e->adr);
	e->ad_dst = get_addr(e->adr, e);
	return ;
}
