
#include "lexer.h"
#include "libft.h"

void	format_space(t_token *token)
{
	char	*formatted;

	if (!token || !token->data)
		return ;
	formatted = ft_strtrim(token->data, " ");
	if (!formatted)
		exit(EXIT_FAILURE);
	free(token->data);
	token->data = formatted;
}
