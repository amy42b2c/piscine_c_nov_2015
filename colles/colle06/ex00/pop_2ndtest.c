/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_2ndtest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 15:50:10 by acresap           #+#    #+#             */
/*   Updated: 2016/02/01 16:32:55 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*PUSH FUNCTION*/
void	push(int stack[], int item)
{
	if (top == (MAX - 1))
	status = 0;
    else
    {
		status = 1;
		++top;
		stack[top] = item;
    }
}

/*POP FUNCTION*/
int		pop(int stack[])
{
	int ret;
	if (top == -1)
    {
		ret = 0;
		status = 0;
	}
    else
    {
		status = 1;
		ret = stack[top];
		--top;
    }
	return ret;
}
