#include <stdio.h>
void main()
{
	
	int i,j,a[20],n,key;

	printf("Enter Number of Elements :");
	scanf("%d",&n);
	
	printf("\nEnter Elements to Sort :");
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=1;i<n;i++)
	{	
		key=a[i];
		j=i-1;

		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	
	printf("\nSorted order :");
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
	
	printf("\n");
}
