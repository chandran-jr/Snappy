#include<stdio.h>
#define size 10 
int a[size],top=-1;

void push()
{
    if(top==size-1)
        printf("Stack is full\n");
    else
    {
        printf("Enter the element to be inserted\n");
        scanf("%d",&a[++top]);
    }
    
}
void pop()
{
    if(top==-1)
        printf("Stack is empty rn\n");
    else
    {
        int item=a[top--];
        printf("The popped element is %d\n",item);
    }
    
}
void display()
{
    int i;
    if(top==-1)
        printf("Stack is empty\n");
        
    else
        for (i=top;i>-1;i--)
            printf("%d \n",a[i]);
        
}
void main()
{
    int ch;
    while(1)
    {
        printf("1.Push\n2.Pop\n3.Display\n4.Quit\nEnter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
                    break;
            case 2:pop();
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
                    break;
            default:printf("Sorry, invalid choice\n");
        }

    }
}
