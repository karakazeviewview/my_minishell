
/**
 * @file unset.c
 * @brief ビルトイン - unsetコマンド
 * @date 2023-01-01
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "terminal.h"

int	builtin_unset(char **args, t_shell *msh)
{
	size_t	i;

	i = 1;
	while (args[i])
	{
		ft_unsetenv(args[i], msh->envs);
		i++;
	}
	return (0);
}
