/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:52:52 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/19 15:01:55 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

#define MAX_LINE 32

#include <rt.h>

enum	e_error_parsing
{
	NO_FILES = -1,
	PARSING_OK = 0,
	ACL_DUP,
	WRONG_OBJ_NAME,
	MISSING_INFO,
	NUMBER_OOF
};

void	file_parsing(char *filename, int *error);

//Error
void	error_message(int err);
#endif
