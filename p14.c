#include<stdio.h>

int sortelements(int array[],int first,int last);

int main(){
   int i, range;
   int array[100];

   printf("enter the number of elements : ");
   scanf("%d",&range);

   printf("Enter the elements : ");
   for(i=0;i<range;i++)
   {
      scanf("%d",&array[i]);
   }

   sortelements(array,0,range-1);

   printf("sorted elements are : ");
   for(i=0;i<range;i++)
   {
      printf(" %d",array[i]);
   }
}

int sortelements(int array[],int first,int last)
{
   int i, j, pivot, temp;

   if(first<last)
   {
      pivot=first;
      i=first;
      j=last;

      while(i<j)
      {
         while(array[i]<=array[pivot]&&i<last)
         {
            i++;
         }

         while(array[j]>array[pivot])
         {
            j--;
         }

         if(i<j)
         {
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
         }
      }

      temp=array[pivot];
      array[pivot]=array[j];
      array[j]=temp;
      sortelements(array,first,j-1);
      sortelements(array,j+1,last);
    }
}