#include<stdio.h>
#include<conio.h>

void main()
{
	int [r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++);
		{
			printf("enter a[%d][%d]:"i,j);
			scanf("%d",&a[i][j]);
		}
		printf(\n);
	}
	for(i=0;i<r;i++);
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
     	printf(\n);
    }
    int sum of row,sum of colum;
    for(i=0;i<r;i++)
    {
         sum of row=sum of colum=0;
         for(j=0;j<c;j++)
         {
         	sum of row=sum of colum+a[i][j];
         	sum of colum=sum of row +a[i][j];
         	
		 }
		 printf("\n sum of row1:%d sum of colum1 %d:",sum of row,sum of colum);
		 
		 printf("\n");
	}
    
    
}
