/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:32:01 by ygorgsena         #+#    #+#             */
/*   Updated: 2022/12/23 16:34:55 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUILTINS_H
# define BUILTINS_H

# include "libft.h"
# include "helpers.h"

# define NEW_LINE "-n"

typedef int	(*t_builtin)(char **args);

t_builtin	builtin_pool(char *name);
size_t		get_param_size(char **args);
int			ft_echo(char **args);
int			ft_env(char **args);
int			ft_pwd(char **args);
int			ft_unset(char **args);

#endif
