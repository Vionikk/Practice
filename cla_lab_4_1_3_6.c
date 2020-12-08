#include <stdio.h>

int main()
{
	float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
	/* your code */
	int i,n=10,j,k;
	float temp=0.0f;

	printf("\nSorting A Float Array \n");

	for(i= 0; i<=9; i++) 
	{
    	printf("%.2f  ", numbers[i]);
	}

	printf("\n");

	for(i=0;i<n;i++)
	{
  	  for(j=0;j<n-i-1;j++)
    	{
 	       if(numbers[j]<numbers[j+1])
 	        { 
 	           temp=numbers[j];//swaping element 
    	        numbers[j]=numbers[j+1];
        	    numbers[j+1]=temp;
   		    }
  	    }
  	    for(k= 0; k< 10; k++) 
		{
    		printf("%.2f  ", numbers[k]);
		}
		printf("\n");
    }
	//printing output of program
	for(i= 0; i< 10; i++) 
	{
    	printf("%.2f  ", numbers[i]);
	}
	/* your code */
	
}