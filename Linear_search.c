#include<stdio.h>
void main() {
	int n,i,ele;
	printf("Enter the size of an array:--");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of an array:--");
	for(i=0;i<n;i++) {
		scanf("%d", &arr[i]);
	}
	printf("the array is:---");
	for(i=0;i<n;i++) {
		printf("%d \n" ,arr[i]);
	}
	printf("Enter the element you want to search:--");
	scanf("%d",&ele);
	for(i=0;i<n;i++) {
		if (arr[i]==ele) {
			printf("The element %d is at index %d \n", arr[i],i+1);
		
		}
	}
	
}
