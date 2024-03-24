#include<stdio.h>

int main()
{
    int num,i,range,flag=0;
    int arr[100];
    printf("enter the number of elements : ");
    scanf("%d",&range);

    printf("enter the elements : ");
    for(i=0;i<range;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("the given list of elements is : ");
    for(i=0;i<range;i++)
    {
        printf("%d \t",arr[i]);
    }

    printf("\n");

    printf("enter the element to search : ");
    scanf("%d",&num);

    for(i=0;i<range;i++)
    {
        if(arr[i]==num)
        {
            printf("%d found at %dth index.",num,i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("element not found.");
    }
}