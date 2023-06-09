
#include "lexer.h"
#include "libft.h"

/**
 * @brief 字句解析器の管理情報を初期化する。
 *
 * @param line　解析したい文字列
 * @return t_tokenizer*　字句解析器の構造体
 */
t_tokenizer	*init_tokenizer(char *line)
{
	t_tokenizer	*tokenizer;

	tokenizer = ft_xmalloc(sizeof(t_tokenizer));
	tokenizer->str = line;
	tokenizer->start = 0;
	tokenizer->pos = 0;
	tokenizer->state = lex_general;
	tokenizer->tokens = ft_vector_init(sizeof(t_token), 1);
	if (!tokenizer->tokens)
		return (NULL);
	return (tokenizer);
}
