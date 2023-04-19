/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:00:03 by eelasam           #+#    #+#             */
/*   Updated: 2022/11/30 14:00:39 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fn(int fd, char *buf, char *cp)
{
	int		rd;
	char	*temp;

	rd = 1;
	while (rd != '\0')
	{
		rd = read(fd, buf, BUFFER_SIZE);
		if (rd == -1)
			return (0);
		else if (rd == 0)
			break ;
		buf[rd] = '\0';
		if (!cp)
			cp = ft_strdup("");
		temp = cp;
		cp = ft_strjoin(temp, buf);
		free(temp);
		temp = NULL;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (cp);
}

char	*extra(char *line)
{
	size_t	i;
	char	*cp;

	i = 0;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	if (line[i] == '\0' || line[1] == '\0')
		return (0);
	cp = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (*cp == '\0')
	{
		free(cp);
		cp = NULL;
	}
	line[i + 1] = '\0';
	return (cp);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buf;
	static char	*cp[1024];

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0 || fd > 1024)
	{
		free(cp[fd]);
		cp[fd] = NULL;
		return (NULL);
	}
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	line = fn(fd, buf, cp[fd]);
	free(buf);
	buf = NULL;
	if (!line)
		return (NULL);
	cp[fd] = extra(line);
	return (line);
}
