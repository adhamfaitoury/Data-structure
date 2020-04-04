#include <stdio.h>
#include<stdlib.h>
#define MAXSIZE 10

struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;

void main ()
{
    int choice;
    s.top = -1;

    printf ("STACK OPERATION\n");
    while (1)
    {
        printf ("*** Stack Menu ***\n");
        printf ("      1    -->    Push \n");
        printf ("      2    -->    Pop  \n");
        printf ("      3    -->    Print  \n");
        printf ("      4    -->    EXIT     \n");
        printf ("-----------------\n");

        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
       case 4:exit(0);

			default: printf("\nWrong Choice!!\n");
        }
    }
}
void push ()
{
    int num;
    if (s.top == (MAXSIZE - 1))
    {
        printf ("Stack is Full!!!\n");
        return;
    }
    else
    {
        printf ("Enter the element to be pushed\n");
        scanf ("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}
int pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("Stack is Empty!!!\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf ("poped element is = %d\n", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}
void display ()
{
    int i;
    if (s.top == -1)
    {
        printf ("Stack is Empty!!!\n");
        return;
    }
    else
    {
        printf ("\n The status of the stack is \n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d\n", s.stk[i]);
        }
    }
    printf ("\n");
}
