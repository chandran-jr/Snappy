#include <stdio.h>
int i,j,low,high,p,a[10],t,k,pivot;
int partition(int a[],int low,int high)
{
	pivot=a[high];
	i=low-1;
	for(j=low;j<=high-1;j++)
		{
			if(a[j]<=pivot)
			{
				i++;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
		    }
		}
	t=a[i+1];
	a[i+1]=a[high];
	a[high]=t;
	return i+1;
		
}
void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		p=partition(a,low,high);
		quicksort(a,low,p-1);
		quicksort(a,p+1,high);
	}
}
main()
{	
	int n;
	printf("Enter the Number of Elements :");
	scanf("%d",&n);
	printf("\nEnter the Elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	low=0;
	high=n-1;
	quicksort(a,low,high);
	printf("\nThe sorted array :");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
} 
