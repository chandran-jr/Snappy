#include <stdio.h>

int merge(int a[],int low,int mid,int high)
{	int n1,n2,sub1[20],sub2[20],i,j,k;
	n1=mid-low+1;
	n2=high-mid;
	for(i=0;i<n1;i++)
	{
		sub1[i]=a[low+i];
	}
	for(j=0;j<n2;j++)
	{
		sub2[j]=a[mid+1+j];
	}
	i=j=0;
	k=low;
	while(i<n1&&j<n2)
	{
		if(sub1[i]<=sub2[j])
		{
			a[k++]=sub1[i];
			i++;
		}
		else
		{
			a[k++]=sub2[j];
			j++;
		}			
	}
	while(i<n1)
	{
		a[k++]=sub1[i++];
	}
	while(j<n2)
	{
		a[k++]=sub2[j++];
	}
}
int mergesort(int a[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);		
	}
}
main()
{	
	int n,i,a[20],ele;
	printf("Enter the Number of Elements :");
	scanf("%d",&n);
	printf("\nEnter the Elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int low=0;
	int high=n-1;
	mergesort(a,low,high);
	printf("\nThe sorted array :");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}  
