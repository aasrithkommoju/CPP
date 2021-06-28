#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number!");
	scanf("%d",&a);
	int d=a*2;
	int e=2;
	for(int i=1;i<=(a+1);i++)
	{
		for(int j=1;j<=d;j++)
		printf(" ");
		for(int k=1;k<=i;k++)
		printf("*");
		printf("\n");
		d=d-2;
	}
	for(int i=a;i>=1;i--)
	{
		for(int j=1;(j<=e)&&(e<=(a*2));j++)
		printf(" ");
		for(int n=1;n<=i;n++)
		printf("*");
		printf("\n");
		e=e+2;
	}
	
}
