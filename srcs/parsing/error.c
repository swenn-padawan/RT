/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:42:48 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/19 15:02:32 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

void	error_message(int err)
{
	if (err == ACL_DUP)
		write (2, "Error\n Can't be nore than ONE lowercase object\n", 46);
	else if (err == WRONG_OBJ_NAME)
		write (2, "Error\n Wrong Object Name!\n", 26);
	else if (err == MISSING_INFO)
		write (2, "Error\n Some object infos missing\n", 33);
	else if (err == NUMBER_OOF)
		write (2, "Error\n An Object Information is Out Of Range!\n", 46);
}
