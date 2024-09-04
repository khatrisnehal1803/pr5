#include<stdio.h>
#include<conio.h>

void main()
{
	int a[100],i,n;
	
	printf("enter size of the array:");
	scanf("%d",&n);
	
	printf("enter element in array:");
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\n all negative element in array:");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
	}
}
