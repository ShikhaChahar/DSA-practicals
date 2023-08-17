#include<stdio.h>
void main() {
	int i,a,b,c,nw,pos,n;
	int arr[50];
	do{
	printf("Enter 1 to create an array:--\n");
	printf("Enter 2 to display the array:--\n");
	printf("Enter 3 to add an element:--\n");
	printf("Enter 4 to delete an element:--\n");
	printf("Enter 5 to exit\n");
	scanf("%d", &a);
	switch(a) {
	    case 1:
		if(a==1) {
			printf("Enter the number of elements:--");
			scanf("%d", &b);
			printf("enter the elements of array:--\n");
			for ( i=0;i<b;i++) {
			scanf("%d", &arr[i] );
		    }	
	    }
	    break;
	    case 2:
	    	if(a==2) {
	    	    for (i=0;i<b;i++) {
			        printf("%d \n", arr[i] );
		        }
			}
			break;
		case 3:
			if(a==3) {
				printf("Enter the place at which you want to add element:--");
				scanf("%d",&c);
				printf("Enter the new element");
				scanf("%d",&nw);
				b=b+1;
				for(i=b-1;i>=c-1;i--) {
					arr[i+1]=arr[i];
				}
				arr[c-1]=nw; //c-1 because the position entered by user is one greater than 
				            //the position in the array
				printf("The new array is:--\n");
				for(i=0;i<b;i++) {
					printf("%d\n",arr[i]);
				}
			}
			break;
		case 4:
		if(a==4) {
			printf("Enter the position of element you want to delete:--\n");
			scanf("%d",&pos);
			for(i=pos-1;i<=b;i++) //pos-1 because the position entered by user is one greater than 
				                //the position in the array
				{                 
					arr[i]=arr[i+1];
				}
				b=b-1;
				printf("The new array is:--\n");
				for(i=0;i<b;i++) {
					printf("%d\n",arr[i]);
				}
		}
		break;	
		case 5:
			if (a==5) {
		    break;
			}
		default:
			printf("Invalid option");
    }
} while (a!=5);
}
