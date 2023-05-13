
#include "lexer.h"
#include "libft.h"

/** 状態遷移：空白の場合
 * @brief
 *
 * @param tokenizer
 * @return void*
 */
void	*lex_whitespace(t_tokenizer *tokenizer)
{
	token_next(tokenizer);
	while (ft_isspace(token_peek(tokenizer)) == true)
	{
		token_next(tokenizer);
	}
	return (lex_general);
}
