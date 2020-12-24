#include <stdio.h>
void main()
{
	int i,j,n,temp,a[20];

	printf("\nEnter Number of elements :");
	scanf("%d",&n);
	
	printf("\nEnter the Numbers :");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	printf("\nSorted Elements :");

	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
	
	printf("\n");
}
