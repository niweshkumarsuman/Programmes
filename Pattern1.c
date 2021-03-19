 #include<stdio.h>
int display(int);
int main()
{
	int n;
	printf("Enter the number in between in range of65 and 90\n");
	scanf("%d",&n);
	display(n);
	return 0;
}
int display(int P)
{
	int i,j,k,l;
	for(i=65;i<=P;i++)
	{
		for(j=P-i;j>=1;j--)
		{
			printf("  ");
		}
		for(k=65;k<=i;k++)
		{
			printf(" %c",k);
		}
		for(l=i-1;l>=65;l--)
		{
			printf(" %c",l);
		}
		printf("\n");
	}
	return 0;
}
