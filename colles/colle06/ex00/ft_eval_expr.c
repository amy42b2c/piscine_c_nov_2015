/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_expr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 15:25:35 by acresap           #+#    #+#             */
/*   Updated: 2016/02/01 18:15:35 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_infix_to_postfix(char *q);
void    pop(Stack *S);
void    push(Stack *S,int element);

int	ft_eval_expr(char *str)
{
	char	*s;

	*s = NULL;
	while (str != '\0')
	{
		if (ft_is_operand(1))
			push(S, q);
	}
	if (ft_is_operand(1))
	{
		a = pop(S);
		b = pop(S);
		c = b op a;
		push(S, element);
	}
	return (pop(S));
}
