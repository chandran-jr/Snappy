#include <stdio.h>
void heap(int array[],int n,int i)
{
	int large = i;
	int left = 2*i+1;
	int right = 2*i+2;

	if(left<n && array[left]>array[large])
		large = left;
	
	if(right < n && array[right] > array[large])
		large = right;
	 
	if(large != i)
	{
		int temp = array[i];
		array[i] = array[large];
		array[large] = temp;

		heap(array,n,large);
	}
}

void heapsort(int array[],int n)
{
	for(int i = n/2-1;i >= 0;i--)
		heap(array,n,i);
	
	for(int i = n-1;i >= 0;i--)
	{
		int temp = array[0];
		array[0] = array[i];
		array[i] = temp;
		
		heap(array,i,0);
	}
}

void main()
{

	int i,n,array[20];

	printf("Enter Number of Elements : ");
	scanf("%d",&n);

	printf("\nEnter the Elements : ");

	for(i = 0;i < n;i++)
		scanf("%d",&array[i]);

	heapsort(array,n);
	
	printf("\nSorted Elements order : ");

	for(i = 0;i < n;i++)
		printf("%d\t",array[i]);
	
	printf("\n");
}




















