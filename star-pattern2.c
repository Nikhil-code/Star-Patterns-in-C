/*
	    *
	   **
	  ***
	 ****
	*****
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,r;
	printf("Enter the number of rows:");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r;j++)
		{
			if(j>=(r+1)-i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
