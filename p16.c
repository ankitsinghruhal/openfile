 #include <stdio.h>

int main()
{
    int i,j,range,count=0;
    int array[100],array2[100];
   
    printf("Enter size of the array : ");
    scanf("%d", &range);
 
    printf("Enter elements in array : ");
    for(i=0; i<range; i++)
    {
        scanf("%d",&array[i]);
    }
    
  for(i=0; i<range; i++)
    {
        count=1;
        if(array[i]!=-1)
		{
		    for(j=i+1; j<range; j++)
     
            {
        	   if(array[i]==array[j])
        	    {
			       count++;
			       array[j]=-1;
		       }
	       }
	       array2[i]=count;
		}     
    }
     
    printf("unique numbers in the  array :\range");
 
         
 for(i=0; i<range; i++)
    {
         if(array[i]!=-1)
        {
        	if(array2[i]==1)
        	printf("%d\range",array[i]);
		}     
    }    
    return 0;
} 