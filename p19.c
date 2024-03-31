#include<stdio.h>

int main()
{
    int num,i,j,temp,range,flag=0,low;
    int array[100];

    printf("enter the number of elements : ");
    scanf("%d",&range);

    printf("enter the elements : ");
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<range;i++)
    {
        low=i;
        for(j=i+1;j<range;j++)
        {
            if(array[j]<array[low])
            {
                low=j;
            }
            temp=array[low];
            array[low]=array[i];
            array[i]=temp;
        }
    }

    printf("%d is 2nd smallest element.",array[1]);
}