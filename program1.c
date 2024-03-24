#include<stdio.h>

int main()
{
    int arr[100];
    int i,range;
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
}
