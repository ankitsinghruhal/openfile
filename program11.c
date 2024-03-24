#include<stdio.h>

int main()
{
    int num,i,j,temp,range,flag=0;
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
    for(i=0;i<range-1;i++)
    {
        for(j=0;j<range-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(i=0;i<range;i++)
    {
        printf("%d \t",arr[i]);
    }
    
}