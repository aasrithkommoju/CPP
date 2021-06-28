#include<stdio.h>
int main()
{
	int k=15;
	int p=5;
	int q=5;
	for(int r=1;r<=3;r++)
	{
		for(int e=3;e>=r;e--)
		printf(" ");
		for(int c=7;c>=p;c--)
		printf("*");
		for(int d=1;d<=q;d++)
		printf(" ");
		for(int l=7;l>=p;l--)
		printf("*");
		printf("\n");
		p=p-2;
		q=q-2;
	}
	for(int h=1;h<=17;h++)
	printf("*");
	printf("\n");
	for(int i=1;i<=7;i++)
	{
		for(int j=1;j<=i;j++)
		printf(" ");
		for(int m=1;m<=k;m++)
			printf("*");
		printf("\n");
		k=k-2;
	}
}
