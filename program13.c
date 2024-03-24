#include<stdio.h>

int main()
{
    int num,i,j,temp,range,flag=0,low;
    int arr[100];

    printf("enter the number of elements : ");
    scanf("%d",&range);

    printf("enter the elements : ");
    for(i=0;i<range;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("the given list of elements in is : ");
    for(i=0;i<range;i++)
    {
        printf("%d \t",arr[i]);
    }

    printf("\n");

    printf("elements are sorted : ");
    for(i=0;i<range;i++)
    {
        low=arr[i];
        j=i-1;
        while(low<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=low;
    }

    for(i=0;i<range;i++)
    {
        printf("%d \t",arr[i]);
    }
    
}