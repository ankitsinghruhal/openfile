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
        low=i;
        for(j=i+1;j<range;j++)
        {
            if(arr[j]<arr[low])
            {
                low=j;
            }
            temp=arr[low];
            arr[low]=arr[i];
            arr[i]=temp;
        }
    }

    for(i=0;i<range;i++)
    {
        printf("%d \t",arr[i]);
    }
    
}