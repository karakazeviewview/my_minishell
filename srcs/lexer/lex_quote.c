
#include "lexer.h"

static void	*lex_double_quote(t_tokenizer *tokenizer)
{
	char	tmp_c;

	while (true)
	{
		tmp_c = token_next(tokenizer);
		if (tmp_c == '\0')
			return (lex_error);
		else if (tmp_c == '"')
			break ;
	}
	if (is_delimiter(token_current(tokenizer)) == true)
		token_emit(tokenizer, TOKEN_STR);
	return (lex_general);
}

static void	*lex_single_quote(t_tokenizer *tokenizer)
{
	char	tmp_c;

	while (true)
	{
		tmp_c = token_next(tokenizer);
		if (tmp_c == '\0')
			return (lex_error);
		else if (tmp_c == '\'')
			break ;
	}
	if (is_delimiter(token_current(tokenizer)) == true)
		token_emit(tokenizer, TOKEN_STR);
	return (lex_general);
}

/**
 * @brief 状態遷移：クオーテーションの場合
 *
 * @param tokenizer
 * @return void*
 */
void	*lex_quote(t_tokenizer *tokenizer)
{
	char	quote_c;

	quote_c = token_next(tokenizer);
	if (quote_c == '\'')
		lex_single_quote(tokenizer);
	else if (quote_c == '"')
		lex_double_quote(tokenizer);
	return (lex_general);
}
