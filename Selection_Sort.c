#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p,n,i,j,temp;
	printf("Enter the number of data\n");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("%d no of elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("number after after arranging\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",*(p+i));
	}
	return 0;
}
