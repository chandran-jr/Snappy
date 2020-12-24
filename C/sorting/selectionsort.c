#include <stdio.h>
void main()
{
	int i,j,min,n,temp,a[20];

	printf("\nEnter Number of Elements :");
	scanf("%d",&n);
	
	printf("\nEnter the elements :");
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n-1;i++)
	{
		min=i;

		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])	
				min=j;
		}
		
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}

	printf("\nSorted Elements :");
	
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);

	printf("\n");
}
