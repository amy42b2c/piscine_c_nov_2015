#include<stdio.h>
#include<stdlib.h>

typedef struct Stack
{
	int capacity; /* capacity stands for max number of elements stk can hold. */
	int size; /* Size stands for current size of stack */
	int *elements; /* & elements is the array of */
}
Stack;

/* create_stack function takes argument the maximum number of elements the 
 * stack can hold, creates a stack according to it and returns a pointer to 
 * the stack. */

Stack	*create_stack(int max_elements)
{
	Stack *S;
	S = (Stack *)malloc(sizeof(Stack));
	S->elements = (int *)malloc(sizeof(int)*max_elements);
	S->size = 0;
	S->capacity = max_elements;
	return S;
}

void	pop(Stack *S)
{
	if(S->size==0)
	{
		printf("Stack is Empty\n");
		return;
	}
	else
		S->size--;
	return;
}

int		top(Stack *S)
{
	if(S->size==0)
	{
		printf("Stack is Empty\n");
		exit(0);
	}
	return S->elements[S->size-1];
}

void	push(Stack *S,int element)
{
	if(S->size == S->capacity)
		printf("Stack is Full\n");
	else
		S->elements[S->size++] = element;
	return;
}

/*
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
*/
