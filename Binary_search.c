#include<stdio.h>
int index;
int Bsearch(int arr[],int size, int target)
{
	int first=0;
	int last=size-1;
	while(first<=last)
	{
		int mid=first+(last-first)/2;
		if (arr[mid]==target)
		{
			return mid;
		}
		else if(arr[mid]<target)
		{
			first=mid+1;
		}
		else
		{
			last=mid-1;
		}
	}return-1;
}
void main()
{
	int n,i,target;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be searched:");
	scanf("%d",&target);
	int output=Bsearch(arr,n,target);
	
	if (index!=-1)
	{
		printf("Element found at index:%d\n",output);
	}
	else{
		printf("Element not found");
	}
}
