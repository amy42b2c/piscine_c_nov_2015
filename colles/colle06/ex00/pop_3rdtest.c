/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_3rdtest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 16:12:52 by acresap           #+#    #+#             */
/*   Updated: 2016/02/01 16:57:49 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

/* Stack has three properties. capacity stands for the maximum number of 
 * elements stack can hold.	
 * Size stands for the current size of the stack and elements is the array of 
 * elements. */

typedef struct Stack
{
	int capacity;
	int size;
	int *elements;
}
Stack;

/* crateStack function takes argument the maximum number of elements the 
 * stack can hold, creates a stack according to it and returns a pointer to 
 * the stack. */

Stack	*createStack(int max_elements)
{
	/* Create a Stack */
	Stack *S;
	S = (Stack *)malloc(sizeof(Stack));
	/* Initialise its properties */
	S->elements = (int *)malloc(sizeof(int)*max_elements);
	S->size = 0;
	S->capacity = max_elements;
	/* Return the pointer */
	return S;
}

void	pop(Stack *S)
{
	/* If stack size is zero then it is empty. So we cannot pop */
	if(S->size==0)
	{
		printf("Stack is Empty\n");
		return;
	}
	/* Removing an element is equivalent to reducing its size by one */
	else
	{
		S->size--;
	}
	return;
}

int		top(Stack *S)
{
	if(S->size==0)
	{
		printf("Stack is Empty\n");
		exit(0);
	}
	/* Return the topmost element */
	return S->elements[S->size-1];
}

void	push(Stack *S,int element)
{
	/* If the stack is full, we cannot push an element into it as there is no 
	 * space for it. */
	if(S->size == S->capacity)
	{
		printf("Stack is Full\n");
	}
	else
	{
		/* Push an element on the top of it and increase its size by one*/ 
		S->elements[S->size++] = element;
	}
	return;
}

int		main()
{
	Stack *S = createStack(5);
	push(S,7);
	push(S,5);
	push(S,21);
	push(S,-1);
	printf("Top element is %d\n",top(S));
	pop(S);
	printf("Top element is %d\n",top(S));
	pop(S);
	printf("Top element is %d\n",top(S));
	pop(S);
	printf("Top element is %d\n",top(S));
	return (0);
}
