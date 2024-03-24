#include<stdio.h>

int main()
{
    int num,i,range,flag=0,low,mid,high;
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

    low=0;
    high=range;
    mid=(low+high)/2;

    while(low<=high)
    {
        if(arr[mid]<num)
        {
            low=mid+1;
        }
        else if(arr[mid]==num)
        {
            printf("%d found at %dth index.",num,mid);
            flag=1;
            break;
        }
        else if(arr[mid]>num)
        {
            high=mid-1;
        }
    }
    if(flag==0)
    {
        printf("element not found.");
    }
}