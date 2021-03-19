#include<stdio.h>
int display(int);
int main()
{
	int n,r;
	printf("Enter the NO:\n");
	scanf("%d",&n);
	r=display(n);
	if(r==1)
		printf("Is a magic Number\n");
	else
		printf("Is not a magic no:");
	return 0;
}
int display(int n)
{
	int i,d,s;
	if(n>9)
	{
		s=0;
		while(n!=0)
		{
			d=n%10;
			s=s+d;
			n=n/10;
		}
		 display(s);
	}
	else
		return n;
}
