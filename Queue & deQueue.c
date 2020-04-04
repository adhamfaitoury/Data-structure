#include <stdio.h>
#include<stdlib.h>
#define MAXSIZE 10

struct queue
{
    int que[MAXSIZE];
    int top;
    int bottom;
};
typedef struct queue QUEUE;
QUEUE q;


void main ()
{
    int choice;
    q.top = -1;
    q.bottom=-1;

    printf ("QUEUE OPERATION\n");
    while (1)
    {
        printf ("*** QUEUE MENU ***\n");
        printf ("      1    -->    Enqueue \n");
        printf ("      2    -->    Dequeue  \n");
        printf ("      3    -->    Print  \n");
        printf ("      4    -->    Exit     \n");
        printf ("-----------------\n");

        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            Enqu();
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            display();
            break;
       case 4:exit(0);

			default: printf("\nWrong Choice!!\n");
        }
    }
}
void Enqu ()
{
    int x;
    if (q.bottom == (MAXSIZE - 1))
    {
        printf ("Queue is Full!!!\n");
        return;
    }
    else
    {
        if(q.top == -1)
            q.top = 0;
        printf ("Enter the element to be added\n");
        scanf ("%d", &x);
        q.bottom = q.bottom + 1;
        q.que[q.bottom] = x;
    }
    return;
}
void Dequeue ()
{
    int x;
    if (q.bottom == - 1)
    {
        printf ("Queue is Empty!!!\n");
        return (q.top);
    }
    else
    {
        x = q.que[q.top];
        printf ("Deleted  element is = %d\n", q.que[q.top]);
        q.top = q.top + 1;
        if(q.top > q.bottom)
            q.top = q.bottom = -1;
    }
    return(x);
}
void display ()
{
    int i;
    if (q.bottom == -1)
    {
        printf ("Queue is Empty!!!\n");
        return;
    }
    else
    {
        printf ("\n The status of the queue is \n");
        for (i = q.top; i <= q.bottom; i++)
        {
            printf ("%d\n", q.que[i]);
        }
    }
    printf ("\n");
}
