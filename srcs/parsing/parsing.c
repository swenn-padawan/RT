/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 09:29:43 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/19 16:20:51 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "objects.h"
#include "rt.h"
/*
void	fill_object(int type, t_objects *objects, char *line, char **remain)
{
	while (*line && ft_isspace(*line))
		line++;
	if (type == AMBIENT)
		//fill ambient
	if (type == CAMERA)
		//fill camera
	if (type == LIGHT)
		//fill light
	if (type == SPHERE)
		//fill sphere
	if (type == PLANE)
		//fill plane
	if (type == CYLINDER)
		//fill cylinder

	if (remain)
		*remain = line;
}

static void	parsing_line(char *line, t_objects *objects, int *error)
{
	char	*prev;

	while (*line)
	{
		prev = line;
		line += skip_space(line);
		if (!*line)
			break ;
		fill_object(identify_object(line, &line), objects, line, &line);
		if (prev == line)
			line++;
	}
}
*/

int	check_object_identifier(char *str)
{
	static int	flag_ambient = 0;
	static int	flag_camera = 0;
	static int	flag_light = 0;

	if ((*str == 'A' && flag_ambient)
		|| (*str == 'C' && flag_camera)
		|| (*str == 'L' && flag_light))
		return (ACL_DUP);
	if (ft_strcmp(str, "A") || ft_strcmp(str, "C") ||ft_strcmp(str, "L")
		|| ft_strcmp(str, "sp") || ft_strcmp(str, "pl") || ft_strcmp(str, "cy"))
		return (WRONG_OBJ_NAME);
	flag_ambient = (*str = 'A');
	flag_camera = (*str = 'C');
	flag_light = (*str = 'L');
	return (PARSING_OK);
}

void	print_object(char **object_line)
{
	int	i;

	i = -1;
	while (object_line[++i])
	{
		printf("%s", object_line[i]);
		if (object_line[i + 1] != NULL)
			printf("\t");
	}
}

void	file_parsing(char *filename, int *error)
{
	int			fd;
	char		*line;
	char		**object_line;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		*error = NO_FILES;
		return ;
	}
	line = get_next_line(fd);
	while (line != NULL)
	{
		object_line = ft_split(line, ' ');
		if (check_object_identifier(object_line[0]) != PARSING_OK)
			return ;
		print_object(object_line);
		line = get_next_line(fd);
		if (!line)
			break;
		if (*line == '\n')
		{
			line = get_next_line(fd);
			if (line == NULL)
				break ;
			continue ;
		}
	}
}
