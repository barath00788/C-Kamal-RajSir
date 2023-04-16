#include <stdio.h>
int main()
{
    int choice,a,b;
    while(1){
        printf("select your choice:");
        scanf("%d",&choice);
        printf("enter a & b values: ");
        scanf("%d%d",&a,&b);
        switch(choice)
        {
            case 1:
            printf("add a & b = %d\n",a+b);
            break;
            case 2:
            printf("sub a & b =%d\n",a-b);
            break;
            default:
            printf("Error: please enter correct choic\n");
            break;
        }
    }
    
}