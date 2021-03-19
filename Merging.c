#include<stdio.h>
int main()
{
	int a[100],b[100],c[100],i,j,k,m,n;
	printf("Enter the size of 1st and 2nd array\n");
	scanf("%d %d",&m,&n);
	printf("Enter %d elements in 1st array\n",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter %d elements in 2nd array\n",n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	i=0,j=0,k=0;
	while(i<m&&j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	while(i<m)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<n)
	{
		c[k]=b[j];
		j++;
		k++;
	}
	printf("The Resultant array is\n");
	for(k=0;k<m+n;k++)
	{
		printf("%d  ",c[k]);
	}
	printf("\n");
	return 0;
}
