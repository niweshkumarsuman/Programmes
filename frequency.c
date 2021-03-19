#include<stdio.h>
int main()
{
	int arr[100],fr[100],i,j,n,count;
	printf("\nEnter the size of array\n");
	scanf("%d",&n);
	printf("Enter %d numbers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		fr[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				fr[j]=0;
			}
		
	    }
	
	if(fr[i]!=0)
		fr[i]=count;
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		if(fr[i]!=0)
			printf("%d occurs %d times\n",arr[i],fr[i]);
		}
		printf("\n\n");
	}

	

