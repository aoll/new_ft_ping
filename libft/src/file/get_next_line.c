/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/10 15:05:03 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 17:06:59 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_free_strs(char **s1, char **s2, char **s3, char **s4)
{
	if (s1 && *s1)
	{
		free(*s1);
		*s1 = NULL;
	}
	if (s2 && *s2)
	{
		free(*s2);
		*s2 = NULL;
	}
	if (s3 && *s3)
	{
		free(*s3);
		*s3 = NULL;
	}
	if (s4 && *s4)
	{
		free(*s4);
		*s4 = NULL;
	}
	return (EXIT_SUCCESS);
}

static int	ft_mycpy_tp(char **line, char **stat, char **tp, int l)
{
	ft_free_strs(line, stat, NULL, NULL);
	*line = ft_strnew(0);
	*stat = ft_strsub((char *)*tp, 1, l - 1);
	ft_free_strs(tp, NULL, NULL, NULL);
	return (1);
}

static int	ft_mycpy(char **stat, char **line)
{
	size_t	i;
	size_t	l;
	char	*tp;

	tp = ft_strdup(*stat);
	i = 0;
	l = ft_strlen(tp);
	if (*stat[0] == '\n' || *stat[0] == '\0')
		return (ft_mycpy_tp(line, stat, &tp, l));
	while (tp[i] != '\n' && tp[i] != '\0')
		i++;
	if (tp[i] == '\n')
	{
		ft_free_strs(line, stat, NULL, NULL);
		*line = ft_strsub((char *)tp, 0, i);
		*stat = ft_strsub((char *)tp, i + 1, l - i - 1);
		ft_free_strs(&tp, NULL, NULL, NULL);
		return (1);
	}
	ft_free_strs(&tp, NULL, NULL, NULL);
	return (0);
}

static int	ft_get_loop(int const fd, char **line, char **stat)
{
	char		*buf;
	char		*tmp;
	int			rd;

	buf = ft_strnew(BUFF_SIZE);
	while ((rd = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[rd] = '\0';
		tmp = ft_strjoin((const char *)*stat, (const char *)buf);
		free(*stat);
		*stat = NULL;
		*stat = ft_strdup(tmp);
		free(tmp);
		if (ft_mycpy(stat, line) > 0)
		{
			free(buf);
			free(*stat);
			*stat = NULL;
			return (1);
		}
	}
	free(buf);
	return (EXIT_SUCCESS);
}

int			get_next_line(int const fd, char **line)
{
	static char	*stat;
	int			rd;

	*line = ft_strnew(0);
	if (fd < 0)
		return (-1);
	if (stat && (rd = ft_mycpy(&stat, line)) > 0)
		return (1);
	if (ft_get_loop(fd, line, &stat))
		return (1);
	if (rd == 0)
		return (ft_free_strs(line, &stat, NULL, NULL));
	if (stat)
	{
		*line = ft_strdup(stat);
		free(stat);
		stat = NULL;
		return (1);
	}
	return (0);
}
