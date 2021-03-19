#include<stdio.h>
int arr[100],n,i,ub;
int create(int[]);
int traversal(int []);
int insertion(int []);
int deletion(int []);
int main()
{
	 int choice;
	 printf("Enter 1 for creation:\n");
	 printf("Enter 2 for traversal\n");
	 printf("Enter 3 for insertion\n");
	 printf("Enter 4 for deletion\n");
	 printf("Enter 0 to exit:\n\n");
	 do
	 {
	 	printf("Enter you choice\n");
	 	scanf("%d",&choice);
	 	switch(choice)
	 	{
	 		case 1: create(arr);
	 				break;
	 		case 2: traversal(arr);
			 		break;
			case 3: insertion(arr);
					break;
			case 4: deletion(arr);
					break;
			default :
					printf("Wrong choice..try again\n");
		}
	}while(choice!=0);
	return 0;
}
int create(int arr[100])
{
	printf("Enter the no of element to be entered:\n");
	scanf("%d",&n);
	ub=n-1;
	printf("Enter %d elements:\n",n);
	for(i=0;i<=ub;i++)
	{
		scanf("%d",&arr[i]);
	}
	return 0;
}
int traversal(int arr[100])
{
	printf("Elements in array:\n");
	for(i=0;i<=ub;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
int insertion(int arr[100])
{
	int pos,item;
	printf("Enter the position to insert:\n");
	scanf("%d",&pos);
	printf("Enter the value to be inserted\n");
	scanf("%d",&item);
	for(i=ub;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=item;
	ub=ub+1;
	return 0;
}
int deletion(int arr[100])
{
	int pos,item;
	printf("Enter the position from where the element to be deleted\n");
	scanf("%d",&pos);
	item=arr[pos];
	for(i=pos;i<ub;i++)
	{
		arr[i]=arr[i+1];
	}
	printf("The deleted %d number is=\n",item);
	ub=ub-1;
	return 0;
}

	

