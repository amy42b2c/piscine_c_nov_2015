#include <stdio.h>
#define max 5

int push(int stack[max], int *top, int *data)
{
	if(*top == max -1)
		return(-1);
	else
	{
		*top = *top + 1;
		stack[*top] = *data;
		return (1);
	} // else
} // push

int pop(int stack[max], int *top, int *data)
{
	if(*top == -1)
		return (-1);
	else
	{
		*data = stack[*top];
		*top = *top - 1;
		return (1);
	} //else
} // pop

int		main(void)
{
	//... create stack	
	int stack[max],data;
	int top,option,reply;
	//... init stack
	top = -1;
//	clrscr();
	do
	{
		printf("\n 1. push");
		printf("\n 2. pop");
		printf("\n 3. exit");
		printf("\nSelect proper option : ");
		scanf("%d",&option);
		switch (option)
		{
			case 1 : // push
				printf("\n Enter a value : ");
				scanf("%d", &data);
				reply = push(stack, &top, &data);
				if( reply == -1 )
					printf("\nStack is full");
				else
					printf("\n Pushed value");
				break ;
			case 2 : // pop
				reply = pop ( stack,&top,&data);
				if( reply == - 1)
					printf("\nStack is empty");
				else
					printf("\n Popped value is %d",data);
				break ;
			case 3 : return (0);
		} // switch
	}
	while (1);
	{
		return (0);
	}
} // main
